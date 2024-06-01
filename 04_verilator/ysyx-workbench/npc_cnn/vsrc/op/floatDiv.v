module floatDiv  #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    input                               rst,                    // Reset Signal
    
    input       [DATA_WIDTH - 1: 0]     A,                      // F16/32/64: A
    input       [DATA_WIDTH - 1: 0]     B,                      // F16/32/64: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // F16/32/64: C
);





endmodule