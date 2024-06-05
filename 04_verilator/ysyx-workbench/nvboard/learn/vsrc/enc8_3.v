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