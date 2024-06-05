module lfsr255TB(
    input                       clk,
    input                       rst,

    input                       en,

    output reg      [6: 0]      h0,
    output reg      [6: 0]      h1
);

    wire            [7: 0]      O;

    lfsr255 lfsr (
        .clk(clk),
        .en(en),
        .O(O)
    );

    bcd7seg seg0(
        .b(     O[3:0]  ),
        .h(          h0 )
    );
    bcd7seg seg1(
        .b(     O[7:4]  ),
        .h(          h1 )
    );

endmodule
