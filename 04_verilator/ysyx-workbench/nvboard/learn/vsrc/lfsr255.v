module lfsr255 (
    input                       clk,

    input                       en,
    output reg      [7: 0]      O
);
    reg                         s;
    reg             [7: 0]      R;

    always @(posedge clk) begin
        if (en) begin
            if (R == 8'b00000000) begin
                R = 8'b00000001;         
            end else begin
                s = R[4] ^ R[3] ^ R[2] ^ R[0];
                R = {s, R[7:1]};    
            end
            O = R;
        end else begin
            // s = 1'b0;
            // R = 8'b00000000;
            O = R;
        end
    end



endmodule