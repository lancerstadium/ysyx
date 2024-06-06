module ps2_keyboardTB(
    input                       clk,
    input                       rst,

    input                       ps2_clk,
    input                       ps2_data,
    output reg      [6: 0]      h0,
    output reg      [6: 0]      h1,
    output reg      [6: 0]      h2,
    output reg      [6: 0]      h3,
    output reg      [6: 0]      h4,
    output reg      [6: 0]      h5,
    output reg      [6: 0]      h6,
    output reg      [6: 0]      h7
);

    ps2_keyboard my_keyboard(
        .clk(clk),
        .rst_n(~rst),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .h0(h0),
        .h1(h1),
        .h2(h2),
        .h3(h3),
        .h4(h4),
        .h5(h5),
        .h6(h6),
        .h7(h7)
    );


endmodule