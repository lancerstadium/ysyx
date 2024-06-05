module alu4 (
    input           [2: 0]      sel,
    input                       en,
    input signed    [3: 0]      A,
    input signed    [3: 0]      B,

    output reg signed [3: 0]    C,
    output reg                  s
);
    

    always @(*) begin
        if(en) begin
            case (sel)
                3'b000: C = A + B;
                3'b001: C = A - B;
                3'b010: C = ~A;
                3'b011: C = A & B;
                3'b100: C = A | B;
                3'b101: C = A ^ B;
                3'b110: C = {3'b000, A < B};
                3'b111: C = {3'b000, A == B};
            endcase
        end else begin
            C = 4'b0000;
        end
    end


endmodule



module s7seg (
    input  [3:0] b,
    output reg [6:0] h
);

    always @(*) begin
        case (b)
            4'b0000: h = 7'b1111111;
            4'b0001: h = 7'b0111111;
            default: h = 7'b1111111;
        endcase
    end

endmodule