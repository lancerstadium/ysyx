module adder  #(
    parameter DATA_WIDTH = 16                               // 数据位宽，默认为16位
) (
    input                           clk,                    // 时钟信号
    input                           rst,                    // 复位信号

    input       [DATA_WIDTH-1:0]    A_in,                   // 加数A
    input       [DATA_WIDTH-1:0]    B_in,                   // 加数B
    output reg  [DATA_WIDTH-1:0]    C_out                   // 和
);
    assign C_out = A_in + B_in;

endmodule