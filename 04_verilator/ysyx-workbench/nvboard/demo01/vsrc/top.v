module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [7:0] sw,
    output [15:0] ledr
);
    // Test led.v
    led my_led(
        .clk(clk),
        .rst(rst),
        .btn(btn),
        .sw(sw),
        .ledr(ledr)
    );

endmodule