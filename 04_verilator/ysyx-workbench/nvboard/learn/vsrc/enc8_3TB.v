module enc8_3TB(
    input                       clk,
    input                       rst,

    // ========== enc8_3 =========== //
    input           [7: 0]      I,          
    output reg      [6: 0]      h0,
    output reg      [6: 0]      h7
);

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
        .b( {3'b000, s} ),
        .h(          h7 )
    );

endmodule

