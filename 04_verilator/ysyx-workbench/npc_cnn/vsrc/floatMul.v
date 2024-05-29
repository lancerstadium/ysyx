module floatMul #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input       [DATA_WIDTH - 1: 0]     A,                      // F16/32/64: A
    input       [DATA_WIDTH - 1: 0]     B,                      // F16/32/64: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // F16/32/64: C
);
    // Data Parameters
    parameter   EXPONENT_WIDTH = 
    (DATA_WIDTH == 16) ?        5 : 
    (DATA_WIDTH == 32) ?        8 : 
    (DATA_WIDTH == 64) ?       11 :     8;                      // Default: 8
    parameter   MANTISSA_WIDTH = 
    (DATA_WIDTH == 16) ?       10 : 
    (DATA_WIDTH == 32) ?       23 : 
    (DATA_WIDTH == 64) ?       52 :    23;                      // Default: 23
    parameter   EXPONENT_OFFSET =
    (DATA_WIDTH == 16) ?       13 : 
    (DATA_WIDTH == 32) ?      125 : 
    (DATA_WIDTH == 64) ?     1021 :   125;                      // Default: 125
    parameter   FRACTION_WIDTH      =  MANTISSA_WIDTH * 2 + 1;

    // C: {sign, exponent, mantissa}
    reg                                 sign;
    reg         [EXPONENT_WIDTH - 1: 0] exponent;
    reg         [MANTISSA_WIDTH - 1: 0] mantissa;
    reg         [FRACTION_WIDTH    : 0] fraction;               // Store A * B     
    // A & B
    reg         [MANTISSA_WIDTH    : 0] fractionA, fractionB;   // fraction = {1, mantissa}
    reg                                 eout;

    // C = A * B
    always @ (A or B) begin
        sign = A[DATA_WIDTH - 1] ^ B[DATA_WIDTH - 1];
        mantissa = 0;
        {eout, exponent} = A[DATA_WIDTH - 2: MANTISSA_WIDTH] + B[DATA_WIDTH - 2: MANTISSA_WIDTH] - EXPONENT_OFFSET[EXPONENT_WIDTH - 1: 0];
        fractionA = {1'b1, A[MANTISSA_WIDTH - 1: 0]};
        fractionB = {1'b1, B[MANTISSA_WIDTH - 1: 0]};
        fraction = fractionA * fractionB;
        eout = 0;
        if (A[DATA_WIDTH - 2: 0] == 0 || B[DATA_WIDTH - 2: 0] == 0) begin
            C = 0;
        end else begin
            for (int i = FRACTION_WIDTH; i >= MANTISSA_WIDTH + 2; i = i - 1) begin
                if (fraction[i] == 1'b1) begin
                    fraction = fraction << (FRACTION_WIDTH + 1 - i);
                    {eout, exponent} = exponent - (FRACTION_WIDTH[EXPONENT_WIDTH - 1: 0] + 1 - i[EXPONENT_WIDTH - 1: 0]);
                    break;
                end
            end
            if(eout == 1'b1) begin          // Overflow
                C = 0;
            end else begin
                mantissa = fraction[FRACTION_WIDTH: MANTISSA_WIDTH + 2];
                C = {sign, exponent, mantissa};	
            end
        end
    end
endmodule
