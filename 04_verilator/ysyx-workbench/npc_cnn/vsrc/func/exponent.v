module exponent #(
    parameter   DATA_WIDTH              = 32                    // Data width, default: 32 bits
) (
    input                               clk,                    // Clock Signal
    input                               enb,                    // Enable Signal
    output reg                          ack,                    // Acknow Signal

    input       [DATA_WIDTH - 1: 0]     X,
    output reg  [DATA_WIDTH - 1: 0]     Y
);
    localparam  TAYLOR_ITER             = 7;

    reg         [DATA_WIDTH*TAYLOR_ITER-1: 0]   divisors;       // 1/6 1/5 1/4 1/3 1/2 1 1
    reg         [DATA_WIDTH - 1: 0]             mulA;           // is 1 in the first cycle and then the output of the second multiplication in the rest
    reg         [DATA_WIDTH - 1: 0]             oneOrX;         // one in the first cycle and then X for the rest
    wire        [DATA_WIDTH - 1: 0]             outM1;          // Output of the first multiplication which is either with 1 or X
    wire        [DATA_WIDTH - 1: 0]             outM2;          // Output of the second muliplication and the input of the first
    wire        [DATA_WIDTH - 1: 0]             outA1;          // 
    reg         [DATA_WIDTH - 1: 0]             outReg;         // Output of the Addition each cycle 

    floatMul #(DATA_WIDTH) fMul1 (mulA,oneOrX,outM1); 
    floatMul #(DATA_WIDTH) fMul2 (outM1,divisors[DATA_WIDTH - 1: 0],outM2); 
    floatAdd #(DATA_WIDTH) fAdd1 (outM2,outReg,outA1); 

    always @ (posedge clk) begin
        if(enb == 1'b0) begin
            oneOrX = 32'b00111111100000000000000000000000;      // Init: 1
            mulA = 32'b00111111100000000000000000000000;        // Init: 1
            outReg = 32'b00000000000000000000000000000000;      // Init: 0
            Y = 32'b00000000000000000000000000000000;           // Output: 0 until ack is 1
            ack = 1'b0;                                         // Acknowledge is 0 at the beginning
            divisors = 224'b00111110001010101010101010101011_00111110010011001100110011001101_00111110100000000000000000000000_00111110101010101010101010101011_00111111000000000000000000000000_00111111100000000000000000000000_00111111100000000000000000000000;
        end else begin
            oneOrX = X;
            mulA = outM2;                                       // get the output of the second multiplication to multiply with X
            divisors = divisors >> 32;                            // shift 32 bit to divide the outM1 with the new number to compute the factorial
            outReg = outA1;
            if(divisors == 224'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000) begin
                Y = outA1;
                ack = 1'b1;
            end
        end
    end

endmodule 