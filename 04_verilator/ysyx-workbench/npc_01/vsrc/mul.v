module multiplier  #(
    parameter DATA_WIDTH = 16                               // 数据位宽，默认为16位
) (
    input                           clk,                    // 时钟信号
    input                           rst,                    // 复位信号

    input       [DATA_WIDTH-1:0]    A_in,                   // 乘数A
    input       [DATA_WIDTH-1:0]    B_in,                   // 乘数B
    output reg  [DATA_WIDTH-1:0]    C_out                   // 积
);
    assign C_out = A_in * B_in;

endmodule