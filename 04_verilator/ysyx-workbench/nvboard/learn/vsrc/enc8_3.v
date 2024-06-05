module enc8_3 (
    input       [7: 0]  I,      // I[0]~I[7]
    
    output reg          s,      
    output reg  [2: 0]  O       // O[2]~O[0]
);

    integer i;
    /* verilator lint_off LATCH */
    always @(*) begin
        if(I != 0) begin
            s = 1;
            for(i = 0; i <= 7; i=i+1) begin
                if(I[i] == 1)  begin
                    O = i[2: 0];
                end
            end
        end else begin
            s = 0;
            O = 3'b000;       
        end
    end
    /* verilator lint_off LATCH */

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