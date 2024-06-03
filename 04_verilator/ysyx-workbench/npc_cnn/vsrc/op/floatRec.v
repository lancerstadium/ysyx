module floatRec  #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    
    input       [DATA_WIDTH - 1: 0]     X,                      // F16/32/64: X
    output reg  [DATA_WIDTH - 1: 0]     Y                       // F16/32/64: Y = 1/X
);

    localparam  P1 = 32'b01000000001101001011010010110101;      // 2*y[0] = 43/17
    localparam  P2 = 32'b10111111111100001111000011110001;      // -y[0]^2 = -32/17
    localparam  TWO = 32'h40000000;                             // 2 

    // ================ Caculate: y[1] ================ //
    reg         [DATA_WIDTH - 1: 0]     P2D;                    // P2 * D
    reg         [DATA_WIDTH - 1: 0]     y1;                     // Iter: y[i+1] = y[i] * (2 - y[i] * D)
    reg         [DATA_WIDTH - 1: 0]     x1;                     // x1
    wire        [DATA_WIDTH - 1: 0]     y1Out;
    reg         [DATA_WIDTH - 1: 0]     D1;                     // Divisor
                 
    floatMul    #(DATA_WIDTH) yMul1 (P2, D1, P2D);              // P2 * D = -y[0]^2 * D
    floatAdd    #(DATA_WIDTH) yAdd1 (P2D, P1, y1Out);           // y[1] = P1 + P2D = 2*y[0] - y[0]^2 * D


    // ================ Caculate: y[2] ================ //
    reg         [DATA_WIDTH - 1: 0]     y1D;                    // y[1] * D
    reg         [DATA_WIDTH - 1: 0]     y1S;                    // 2 - y[1] * D
    reg         [DATA_WIDTH - 1: 0]     x2;                     // x2
    reg         [DATA_WIDTH - 1: 0]     y2;                     // Iter: y[i+1] = y[i] * (2 - y[i] * D)
    wire        [DATA_WIDTH - 1: 0]     y2Out;
    reg         [DATA_WIDTH - 1: 0]     D2;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul2 (y1, D2, y1D);              // y[1] * D
    floatAdd    #(DATA_WIDTH) ySub2 (TWO, {1'b1, y1D[DATA_WIDTH-2:0]}, y1S); // y[2] = 2 - y[1] * D
    floatMul    #(DATA_WIDTH) yMul3 (y1, y1S, y2Out);           // y[2] = y1 * (2 - y[1] * D)


    /// ================ Caculate: y[3] ================ //
    reg         [DATA_WIDTH - 1: 0]     y2D;                    // y[2] * D
    reg         [DATA_WIDTH - 1: 0]     y2S;                    // 2 - y[2] * D
    reg         [DATA_WIDTH - 1: 0]     x3;                     // x3
    reg         [DATA_WIDTH - 1: 0]     y3;                     // Iter: y[i+1] = y[i] * (2 - y[i] * D)
    wire        [DATA_WIDTH - 1: 0]     y3Out;
    reg         [DATA_WIDTH - 1: 0]     D3;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul3 (y2, D3, y2D);              // y[2] * D
    floatAdd    #(DATA_WIDTH) ySub3 (TWO, {1'b1, y2D[DATA_WIDTH-2:0]}, y2S); // y[3] = 2 - y[2] * D
    floatMul    #(DATA_WIDTH) yMul4 (y2, y2S, y3Out);           // y[3] = y2 * (2 - y[2] * D)


    // ================ Caculate: y[4] ================ //
    reg         [DATA_WIDTH - 1: 0]     y3D;                    // y[3] * D
    reg         [DATA_WIDTH - 1: 0]     y3S;                    // 2 - y[3] * D
    reg         [DATA_WIDTH - 1: 0]     x4;                     // x4
    reg         [DATA_WIDTH - 1: 0]     y4;                     // Iter: y[i+1] = y[i] * (2 - y[i] * D)
    wire        [DATA_WIDTH - 1: 0]     y4Out;
    reg         [DATA_WIDTH - 1: 0]     D4;                     // Divisor

    floatMul    #(DATA_WIDTH) fMul4 (y3, D4, y3D);              // y[3] * D
    floatAdd    #(DATA_WIDTH) ySub4 (TWO, {1'b1, y3D[DATA_WIDTH-2:0]}, y3S); // y[4] = 2 - y[3] * D
    floatMul    #(DATA_WIDTH) yMul5 (y3, y3S, y4Out);           // y[4] = y3 * (2 - y[3] * D)

    // ================ Caculate: Y ================== //

    always @(negedge clk) begin
        x1 <= X;
        x2 <= x1;
        x3 <= x2;
        x4 <= x3;

        D1 <= {{1'b0, 8'b01111110}, X[22: 0]};
        D2 <= D1;
        D3 <= D2;
        D4 <= D3;
    end

    always @(x1) begin
        if(x1 != 0) begin 
            y1 <= y1Out;
        end
    end

    always @(x2) begin
        y2 <= y2Out;
    end

    always @(x3) begin
        y3 <= y3Out;
    end

    always @(x4) begin
        y4 <= y4Out;
    end

    always @(x4 or y4) begin
        if(y4 != 0) begin
            Y <= {{x4[31], 8'b11111101 - x4[30:23]}, y4[22:0]};
        end
    end

endmodule