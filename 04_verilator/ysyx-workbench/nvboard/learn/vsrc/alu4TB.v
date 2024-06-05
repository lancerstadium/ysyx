module alu4TB(
    input                       clk,
    input                       rst,

    input           [2: 0]      sel,
    input                       en,
    input signed    [3: 0]      A,
    input signed    [3: 0]      B,

    output reg      [6: 0]      h0,
    output reg      [6: 0]      h1,
    output reg      [6: 0]      h2,
    output reg      [6: 0]      h3,
    output reg      [6: 0]      h4,
    output reg      [6: 0]      h5
);

    wire            [3: 0]      C;
    wire                        s;

    alu4 alu (
        .sel(sel),
        .en(en),
        .A(A),
        .B(B),
        .C(C),
        .s(s)
    );

    bcd7seg seg0(
        .b({1'b0, A[2:0]}),
        .h(          h0 )
    );
    s7seg seg1(
        .b({3'b000, A[3]}),
        .h(          h1 )
    );

    bcd7seg seg2(
        .b({1'b0, B[2:0]}),
        .h(          h2 )
    );
    s7seg seg3(
        .b({3'b000, B[3]}),
        .h(          h3 )
    );

    bcd7seg seg4(
        .b({1'b0, C[2:0]}),
        .h(          h4 )
    );
    s7seg seg5(
        .b({3'b000, C[3]}),
        .h(          h5 )
    );


endmodule
