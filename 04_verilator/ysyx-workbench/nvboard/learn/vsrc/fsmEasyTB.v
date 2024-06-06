module fsmEasyTB(
    input                       clk,
    input                       rst,
    
    input                       hand_clk,
    input                       hand_rst,
    input                       in,

    output reg      [6: 0]      h0,
    output reg      [6: 0]      h4,
    output reg      [6: 0]      h5,
    output reg      [6: 0]      h6,
    output reg      [6: 0]      h7
);

    wire            [3: 0]      state;
    wire                        out;

    fsmEasy fsm (
        .clk(hand_clk),
        .rst(hand_rst),
        .in(in),
        .state(state),
        .out(out)
    );

    bcd7seg seg0(
        .b({3'b000, out}),
        .h(          h0 )
    );
    bcd7seg seg4(
        .b({3'b000, state[0]}),
        .h(          h4 )
    );
    bcd7seg seg5(
        .b({3'b000, state[1]}),
        .h(          h5 )
    );
    bcd7seg seg6(
        .b({3'b000, state[2]}),
        .h(          h6 )
    );
    bcd7seg seg7(
        .b({3'b000, state[3]}),
        .h(          h7 )
    );

endmodule
