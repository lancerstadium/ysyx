module top(
    input                       clk,
    input                       rst,

    // ========== mux41_2 ========== //
    // input           [ 1: 0]     x0,
    // input           [ 1: 0]     x1,
    // input           [ 1: 0]     x2,
    // input           [ 1: 0]     x3,
    // input           [ 1: 0]     y,
    // output          [ 1: 0]     f

    // ========== enc8_3 =========== //
    input           [7: 0]      I,          
    output reg      [6: 0]      h0,
    output reg      [6: 0]      h7
);
    // ========== mux41_2 ========== //
    // mux41_2 mux(
    //     .x0(x0),
    //     .x1(x1),
    //     .x2(x2),
    //     .x3(x3),
    //     .y(y),
    //     .f(f)
    // );

    // ========== enc8_3 =========== //
    wire                s;
    wire        [2: 0]  b;
    enc8_3 enc(
        .I(           I ),
        .s(           s ),
        .O(           b )
    );
    bcd7seg seg0(
        .b(   {1'b0, b} ),
        .h(          h0 )
    );
    bcd7seg seg7(
        .b( {3'b000, s}),
        .h(          h7 )
    );

endmodule




