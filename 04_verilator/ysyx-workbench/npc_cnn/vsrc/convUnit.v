module convUnit #(
    parameter   DATA_WIDTH              = 32,                   // Data width, default: 32 bits
    parameter   FLOAT_MODE              = 1,                    // 0: SInt, 1: Float
    parameter   D                       = 1,                    // Filter depth, default: 1
    parameter   S                       = 5                     // Filter size , default: 5
) (
    input                               clk,                    // Clock Signal
    input                               rst,                    // Reset Signal

    input       [D*S*S*DATA_WIDTH-1: 0] img,                    // Partial Image
    input       [D*S*S*DATA_WIDTH-1: 0] fit,                    // Filter: Conv Kernel
    output      [DATA_WIDTH      -1: 0] res                     // Conv Operate Result
);

    reg         [DATA_WIDTH      -1: 0] selInA, selInB;
    integer                             i;
    procElem    #(DATA_WIDTH, FLOAT_MODE) PE (clk, rst, selInA, selInB, res);

    always @ (posedge clk, posedge rst) begin
        if (rst == 1'b1) begin                                  // Reset
            selInA = 0;
            selInB = 0;
            i = 0;
        end else if (i > D*S*S-1) begin                         // Conv Finish: Set Zero
            selInA = 0;
            selInB = 0;
        end else begin                                          // Conv one Elem of partial image and fliter
            selInA = img[DATA_WIDTH*i+:DATA_WIDTH];
            selInB = fit[DATA_WIDTH*i+:DATA_WIDTH];
            i = i + 1;
        end
    end

endmodule