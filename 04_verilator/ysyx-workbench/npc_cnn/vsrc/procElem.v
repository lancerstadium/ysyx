module procElem #(
    parameter   DATA_WIDTH              = 32,                   // Data width, default: 32 bits
    parameter   FLOAT_MODE              = 1                     // 0: SInt, 1: Float
) (
    input                               clk,                    // 时钟信号
    input                               rst,                    // 复位信号

    input       [DATA_WIDTH - 1: 0]     A,                      // DATA: A
    input       [DATA_WIDTH - 1: 0]     B,                      // DATA: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // DATA: C
);
    wire        [DATA_WIDTH - 1: 0]     mulC;
    wire        [DATA_WIDTH - 1: 0]     addC;

    generate
        if (FLOAT_MODE == 0) begin : float_mode
            intMul   #(DATA_WIDTH) iMul (A, B, mulC);
            intAdd   #(DATA_WIDTH) iAdd (mulC, C, addC);
        end else begin : sint_mode
            floatMul #(DATA_WIDTH) fMul (A, B, mulC);
            floatAdd #(DATA_WIDTH) fAdd (mulC, C, addC);
        end
    endgenerate

    always @ (posedge clk or posedge rst) begin
        if (rst == 1'b1) begin
            C = 0;
        end else begin
            C = addC;
        end
    end

endmodule