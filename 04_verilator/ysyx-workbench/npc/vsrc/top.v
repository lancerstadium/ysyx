module top(
    input clk,
    input rst,
    input [15:0] A, 
    input [15:0] B,
    output reg [15:0] C,
    output reg [7:0] led
);
    wire [15:0] A_next1, B_next1, C_next1, Max_next1, Min_next1;
    wire [15:0] A_next2, B_next2, C_next2, Max_next2, Min_next2;
    wire [15:0] A_next3, B_next3, C_next3, Max_next3, Min_next3;
    wire [15:0] A_next4, B_next4, C_next4, Max_next4, Min_next4;
    wire [15:0] A_next5, B_next5, C_next5, Max_next5, Min_next5;
    wire [15:0] A_next6, B_next6, C_next6, Max_next6, Min_next6;
    wire [15:0] A_next7, B_next7, C_next7, Max_next7, Min_next7;
    light lt1(clk, rst, led);
    divider #(16) div1(clk, rst, A, B, 0, 100, 0, A_next1, B_next1, C_next1, Max_next1, Min_next1);
    divider #(16) div2(clk, rst, A_next1, B_next1, C_next1, Max_next1, Min_next1, A_next2, B_next2, C_next2, Max_next2, Min_next2);
    divider #(16) div3(clk, rst, A_next2, B_next2, C_next2, Max_next2, Min_next2, A_next3, B_next3, C_next3, Max_next3, Min_next3);
    divider #(16) div4(clk, rst, A_next3, B_next3, C_next3, Max_next3, Min_next3, A_next4, B_next4, C_next4, Max_next4, Min_next4);
    divider #(16) div5(clk, rst, A_next4, B_next4, C_next4, Max_next4, Min_next4, A_next5, B_next5, C_next5, Max_next5, Min_next5);
    divider #(16) div6(clk, rst, A_next5, B_next5, C_next5, Max_next5, Min_next5, A_next6, B_next6, C_next6, Max_next6, Min_next6);
    divider #(16) div7(clk, rst, A_next6, B_next6, C_next6, Max_next6, Min_next6, A_next7, B_next7, C, Max_next7, Min_next7);
endmodule

