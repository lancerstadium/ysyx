module floatAdd  #(
    parameter   DATA_WIDTH = 32                                 // Data width, default: 32 bits
) (
    input       [DATA_WIDTH - 1: 0]     A,                      // F16/32/64: A
    input       [DATA_WIDTH - 1: 0]     B,                      // F16/32/64: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // F16/32/64: C
);
    // Data Parameters
    parameter EXPONENT_WIDTH = 
    (DATA_WIDTH == 16) ?  5 : 
    (DATA_WIDTH == 32) ?  8 : 
    (DATA_WIDTH == 64) ? 11 : 
    8; // Default value if DATA_WIDTH is unsupported
    parameter MANTISSA_WIDTH = 
    (DATA_WIDTH == 16) ? 10 : 
    (DATA_WIDTH == 32) ? 23 : 
    (DATA_WIDTH == 64) ? 52 : 
    23; // Default value if DATA_WIDTH is unsupported

    // C: {sign, exponent, mantissa}
    reg                                 sign;
    reg         [EXPONENT_WIDTH - 1: 0] exponent;
    reg         [MANTISSA_WIDTH - 1: 0] mantissa;
    reg         [MANTISSA_WIDTH    : 0] fraction;               // fraction = {1, mantissa}
    // A & B
    reg         [EXPONENT_WIDTH - 1: 0] exponentA, exponentB; 
    reg         [MANTISSA_WIDTH    : 0] fractionA, fractionB;
    reg         [EXPONENT_WIDTH    : 0] shiftAmount;
    reg                                 cout;

    // C = A + B
    always @ (A or B) begin
        sign = 0;
        mantissa = 0;
        exponentA = A[DATA_WIDTH - 2: MANTISSA_WIDTH];
        exponentB = B[DATA_WIDTH - 2: MANTISSA_WIDTH];
        fractionA = {1'b1, A[MANTISSA_WIDTH - 1: 0]};
        fractionB = {1'b1, B[MANTISSA_WIDTH - 1: 0]}; 
        exponent = exponentA;
        shiftAmount = 0;
        fraction = 0;
        cout = 0;
        if (A[DATA_WIDTH - 2: 0] == 0) begin                    // special case (A = 0)
            C = B;
        end else if (B[DATA_WIDTH - 2: 0] == 0) begin           // special case (B = 0)
            C = A;
        end else begin                                          // common case
            // 1. Align Exponents
            if (exponentB > exponentA) begin                    
                shiftAmount = exponentB - exponentA;
                fractionA = fractionA >> (shiftAmount);
                exponent = exponentB;
            end else if (exponentA > exponentB) begin 
                shiftAmount = exponentA - exponentB;
                fractionB = fractionB >> (shiftAmount);
                exponent = exponentA;
            end else begin
                exponent = exponentA;
            end
            // 2. Deal with Signs
            if (A[DATA_WIDTH - 1] == B[DATA_WIDTH - 1]) begin   // same sign
                {cout, fraction} = fractionA + fractionB;
                if (cout == 1'b1) begin
                    {cout, fraction} = {cout,fraction} >> 1;
                    exponent = exponent + 1;
                end
                sign = A[DATA_WIDTH - 1];
            end else begin                                      // different signs
                if (A[DATA_WIDTH - 1] == 1'b1) begin            // handle overflow
                    {cout, fraction} = fractionB - fractionA;
                end else begin
                    {cout, fraction} = fractionA - fractionB;
                end
                sign = cout;
                if (cout == 1'b1) begin
                    fraction = -fraction;
                end else begin
                    // Do nothing
                end

                if (fraction[MANTISSA_WIDTH] == 0) begin
                    for (int i = MANTISSA_WIDTH - 1; i >= 0; i = i - 1) begin
                        if (fraction[i] == 1'b1) begin
                            fraction = fraction << (MANTISSA_WIDTH - i);
                            exponent = exponent - (MANTISSA_WIDTH[EXPONENT_WIDTH - 1: 0] - i[EXPONENT_WIDTH - 1: 0]);
                            break;
                        end
                    end                   
                end else begin
                    // Do nothing
                end
            end
            mantissa = fraction[MANTISSA_WIDTH - 1: 0];             // extract mantissa
            C = {sign, exponent, mantissa};                         // combine sign, exponent, and mantissa
            // $display("sign = %b, exponent = %b, mantissa = %b", sign, exponent, mantissa);	
            // $display("A = %b, B = %b, C = %b", A, B, C);	
        end
    end
endmodule
