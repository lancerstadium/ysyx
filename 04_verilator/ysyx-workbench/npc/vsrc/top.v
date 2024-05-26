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
    wire [15:0] A_next3, B_next3,  Max_next3, Min_next3;
    light lt1(clk, rst, led);
    divider #(16) div1(clk, rst, A, B, 0, 5, 0, A_next1, B_next1, C_next1, Max_next1, Min_next1);
    divider #(16) div2(clk, rst, A_next1, B_next1, C_next1, Max_next1, Min_next1, A_next2, B_next2, C_next2, Max_next2, Min_next2);
    divider #(16) div3(clk, rst, A_next2, B_next2, C_next2, Max_next2, Min_next2, A_next3, B_next3, C, Max_next3, Min_next3);
endmodule

