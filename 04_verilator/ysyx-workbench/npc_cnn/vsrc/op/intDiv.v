module intDiv  #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    
    input       [DATA_WIDTH - 1: 0]     A,                      // SInt: A
    input       [DATA_WIDTH - 1: 0]     B,                      // SInt: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // SInt: C
);


endmodule