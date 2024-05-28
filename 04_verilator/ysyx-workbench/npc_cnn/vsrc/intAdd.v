module intAdd  #(
    parameter   DATA_WIDTH = 32                                 // Data width, default: 32 bits
) (
    input       [DATA_WIDTH - 1: 0]     A,                      // SInt: A
    input       [DATA_WIDTH - 1: 0]     B,                      // SInt: B
    output reg  [DATA_WIDTH - 1: 0]     C                       // SInt: C
);
    reg signed [DATA_WIDTH - 1: 0] A_signed, B_signed, C_signed;

    always @ (A or B) begin
        A_signed = A;
        B_signed = B;
        C_signed = A_signed + B_signed;
        C = C_signed;
    end

endmodule
