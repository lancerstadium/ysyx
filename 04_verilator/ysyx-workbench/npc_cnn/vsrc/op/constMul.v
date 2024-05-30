module constMul #(
    parameter signed    COEFF                   = 30,
    parameter           IW                      = 32,        
    parameter           OW                      = IW * 2                
)(
    input                                       clk,
    input signed        [IW - 1: 0]             A,
    output reg signed   [OW - 1: 0]             seqP,
    output signed       [OW - 1: 0]             comP
);
    
    always@(posedge clk) begin
        seqP <= A * COEFF;
    end
    assign comP = A*constant_coeff;
    
endmodule