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


module bcd7seg (
    input  [3:0] b,
    output reg [6:0] h
);

    always @(*) begin
        case (b)
            4'b0000: h = 7'b1000000;
            4'b0001: h = 7'b1111001;
            4'b0010: h = 7'b0100100;
            4'b0011: h = 7'b0110000;
            4'b0100: h = 7'b0011001;
            4'b0101: h = 7'b0010010;
            4'b0110: h = 7'b0000010;
            4'b0111: h = 7'b1111000;
            4'b1000: h = 7'b0000000;
            4'b1001: h = 7'b0010000;
            4'b1010: h = 7'b0001000;
            4'b1011: h = 7'b0000011;
            4'b1100: h = 7'b1000110;
            4'b1101: h = 7'b0100001;
            4'b1110: h = 7'b0000110;
            4'b1111: h = 7'b0001110;
            default: h = 7'b1111111;
        endcase
    end

endmodule

