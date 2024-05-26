module light(
    input clk,
    input rst,
    output reg [7:0] led
);
    reg [31:0] count;
    always @(posedge clk) begin
        if (rst) begin led <= 1; count <= 0; end
        else begin
            led <= {led[6:0], led[7]};
            count <= (count >= 5000000 ? 32'b0 : count + 1);
        end
    end
endmodule