module sigmoid #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    input                               rst,                    // Reset Signal

    input       [DATA_WIDTH - 1: 0]     X,                      // F16/32/64: X
    output reg  [DATA_WIDTH - 1: 0]     Y                       // F16/32/64: Y
);


endmodule