module floatDiv  #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    input                               enb,                    // Enable Signal
    
    input       [DATA_WIDTH - 1: 0]     A,                      // F16/32/64: A
    input       [DATA_WIDTH - 1: 0]     B,                      // F16/32/64: B

    output reg                          ack,                    // Acknow Signal
    output reg  [DATA_WIDTH - 1: 0]     C                       // F16/32/64: C
);
    // Data Parameters
    localparam  MAX_WIDTH = 64;
    localparam  EXPONENT_WIDTH = 
    (DATA_WIDTH == 16) ?        5 : 
    (DATA_WIDTH == 32) ?        8 : 
    (DATA_WIDTH == 64) ?       11 :     8;                      // Default: 8
    localparam  MANTISSA_WIDTH = 
    (DATA_WIDTH == 16) ?       10 : 
    (DATA_WIDTH == 32) ?       23 : 
    (DATA_WIDTH == 64) ?       52 :    23;                      // Default: 23

    localparam  [MAX_WIDTH - 1: 0]     P1_16 = 16'b0;                       
    localparam  [MAX_WIDTH - 1: 0]     P1_32 = 32'b01000000001101001011010010110101;      // 2*c[0] = 43/17
    localparam  [MAX_WIDTH - 1: 0]     P1_64 = 64'b0;

    localparam  [MAX_WIDTH - 1: 0]     P2_16 = 16'b0;
    localparam  [MAX_WIDTH - 1: 0]     P2_32 = 32'b10111111111100001111000011110001;      // -c[0]^2 = -32/17
    localparam  [MAX_WIDTH - 1: 0]     P2_64 = 64'b0;

    localparam  [MAX_WIDTH - 1: 0]     TWO_16 = 16'b0;
    localparam  [MAX_WIDTH - 1: 0]     TWO_32 = 32'h40000000;                             // 2
    localparam  [MAX_WIDTH - 1: 0]     TWO_64 = 64'b0;

    localparam  P1 = 
    (DATA_WIDTH == 16) ?        P1_16 :
    (DATA_WIDTH == 32) ?        P1_32 :
    (DATA_WIDTH == 64) ?        P1_64 : P1_32;
    localparam  P2 = 
    (DATA_WIDTH == 16) ?        P2_16 :
    (DATA_WIDTH == 32) ?        P2_32 :
    (DATA_WIDTH == 64) ?        P2_64 : P2_32;
    localparam  TWO = 
    (DATA_WIDTH == 16) ?        TWO_16 :
    (DATA_WIDTH == 32) ?        TWO_32 :
    (DATA_WIDTH == 64) ?        TWO_64 : TWO_32;

    localparam                          STAGE = 4;              // Pipeline Stage
    reg         [STAGE - 1: 0]          signal;                 // Signal

    // ================ Caculate: c[1] ================ //
    reg         [DATA_WIDTH - 1: 0]     P2D;                    // P2 * D
    reg         [DATA_WIDTH - 1: 0]     c1;                     // Iter: c[i+1] = c[i] * (2 - c[i] * D)
    reg         [DATA_WIDTH - 1: 0]     a1;                     // a1
    reg         [DATA_WIDTH - 1: 0]     b1;                     // b1
    wire        [DATA_WIDTH - 1: 0]     c1Out;
    reg         [DATA_WIDTH - 1: 0]     D1;                     // Divisor
                 
    floatMul    #(DATA_WIDTH) cMul1 (P2, D1, P2D);              // P2 * D = -c[0]^2 * D
    floatAdd    #(DATA_WIDTH) cAdd1 (P2D, P1, c1Out);           // c[1] = P1 + P2D = 2*c[0] - c[0]^2 * D


    // ================ Caculate: c[2] ================ //
    reg         [DATA_WIDTH - 1: 0]     c1D;                    // c[1] * D
    reg         [DATA_WIDTH - 1: 0]     c1S;                    // 2 - c[1] * D
    reg         [DATA_WIDTH - 1: 0]     a2;                     // a2
    reg         [DATA_WIDTH - 1: 0]     b2;                     // b2
    reg         [DATA_WIDTH - 1: 0]     c2;                     // Iter: c[i+1] = c[i] * (2 - c[i] * D)
    wire        [DATA_WIDTH - 1: 0]     c2Out;
    reg         [DATA_WIDTH - 1: 0]     D2;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul2 (c1, D2, c1D);              // c[1] * D
    floatAdd    #(DATA_WIDTH) cSub2 (TWO, {1'b1, c1D[DATA_WIDTH-2:0]}, c1S); // c[2] = 2 - c[1] * D
    floatMul    #(DATA_WIDTH) cMul3 (c1, c1S, c2Out);           // c[2] = c1 * (2 - c[1] * D)


    /// ================ Caculate: c[3] ================ //
    reg         [DATA_WIDTH - 1: 0]     c2D;                    // c[2] * D
    reg         [DATA_WIDTH - 1: 0]     c2S;                    // 2 - c[2] * D
    reg         [DATA_WIDTH - 1: 0]     a3;                     // a3
    reg         [DATA_WIDTH - 1: 0]     b3;                     // b3
    reg         [DATA_WIDTH - 1: 0]     c3;                     // Iter: c[i+1] = c[i] * (2 - c[i] * D)
    wire        [DATA_WIDTH - 1: 0]     c3Out;
    reg         [DATA_WIDTH - 1: 0]     D3;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul3 (c2, D3, c2D);              // c[2] * D
    floatAdd    #(DATA_WIDTH) cSub3 (TWO, {1'b1, c2D[DATA_WIDTH-2:0]}, c2S); // c[3] = 2 - c[2] * D
    floatMul    #(DATA_WIDTH) cMul4 (c2, c2S, c3Out);           // c[3] = c2 * (2 - c[2] * D)


    // ================ Caculate: c[4] ================ //
    reg         [DATA_WIDTH - 1: 0]     c3D;                    // c[3] * D
    reg         [DATA_WIDTH - 1: 0]     c3S;                    // 2 - c[3] * D
    reg         [DATA_WIDTH - 1: 0]     a4;                     // a4
    reg         [DATA_WIDTH - 1: 0]     b4;                     // b4
    reg         [DATA_WIDTH - 1: 0]     c4;                     // Iter: c[i+1] = c[i] * (2 - c[i] * D)
    wire        [DATA_WIDTH - 1: 0]     c4Out;
    reg         [DATA_WIDTH - 1: 0]     D4;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul4 (c3, D4, c3D);              // c[3] * D
    floatAdd    #(DATA_WIDTH) cSub4 (TWO, {1'b1, c3D[DATA_WIDTH-2:0]}, c3S); // c[4] = 2 - c[3] * D
    floatMul    #(DATA_WIDTH) cMul5 (c3, c3S, c4Out);           // c[4] = c3 * (2 - c[3] * D)

    // ================ Caculate: C ================== //
    reg         [DATA_WIDTH - 1: 0]     cFinal;                 // Iter: c[i+1] = c[i] * (2 - c[i] * D)
    reg         [DATA_WIDTH - 1: 0]     aFinal;                
    reg         [DATA_WIDTH - 1: 0]     bFinal;                

    floatMul    #(DATA_WIDTH) cMul6 (cFinal, aFinal, C);        // c[4] = c3 * (2 - c[3] * D)

    always @(posedge clk) begin
        if(enb) begin
            a1 <= A;
            a2 <= a1;
            a3 <= a2;
            a4 <= a3;
            aFinal <= a4;

            b1 <= B;
            b2 <= b1;
            b3 <= b2;
            b4 <= b3;
            bFinal <= b4;

            D1 <= {{1'b0, 8'b01111110}, B[MANTISSA_WIDTH - 1: 0]};
            D2 <= D1;
            D3 <= D2;
            D4 <= D3;

            {ack, signal} <= {signal, 1'b1};
        end else begin
            a1 <= 0;
            a2 <= a1;
            a3 <= a2;
            a4 <= a3;
            aFinal <= a4;

            b1 <= 0;
            b2 <= b1;
            b3 <= b2;
            b4 <= b3;
            bFinal <= b4;

            D1 <= 0;
            D2 <= D1;
            D3 <= D2;
            D4 <= D3;

            {ack, signal} <= {signal, 1'b0};
        end
    end

    always @(a1) begin
        if(a1 != 0) begin 
            c1 <= c1Out;
        end
    end

    always @(a2) begin
        c2 <= c2Out;
    end

    always @(a3) begin
        c3 <= c3Out;
    end

    always @(a4) begin
        c4 <= c4Out;
    end

    always @(aFinal) begin
        if (c4 != 0) begin
            cFinal <= {{bFinal[DATA_WIDTH - 1], 8'b11111101 - bFinal[DATA_WIDTH - 2: MANTISSA_WIDTH]}, c4[MANTISSA_WIDTH - 1: 0]};
        end
    end

endmodule