module convLayerSingle #(
    parameter   DATA_WIDTH              = 32,                   // Data width, default: 32 bits
    parameter   FLOAT_MODE              = 1,                    // 0: SInt, 1: Float
    parameter   D                       = 1,                    // Filter depth, default: 1
    parameter   S                       = 5,                    // Filter size , default: 5
    parameter   H                       = 32,                   // Image height, default: 32
    parameter   W                       = 32                    // Image width , default: 32
) (
    input                               clk,                    // Clock Signal
    input                               rst,                    // Reset Signal

    input       [0: D*H*W*DATA_WIDTH-1] img,                    // Full Image
    input       [0: D*S*S*DATA_WIDTH-1] fit,                    // Filter: Conv Kernel
    output      [0: (H-S+1)*(W-S+1)*DATA_WIDTH-1]   res         // Conv Single Layer Res
);
    // array of the matrices to be sent to conv units
    reg         [0: (H-S+1)*(W-S+1)*S*S*D*DATA_WIDTH-1] imgPart;
    integer                             i, k, l, m, address;

    always @ (*) begin
        address = 0;                                            // To fill the imgPart vector	
        for (m = 0; m < (H-S+1); m = m + 1) begin               // Loop on the first 28 rows of the image (Case: D*32*32 image)
            for (l = 0; l < (W-S+1); l = l +1) begin            // Loop on the first 28 cols of the image (Case: D*32*32 image)
                for (k = 0; k < D; k = k + 1) begin             // Loop on the depth of the image
                    for (i = 0; i < S; i = i + 1) begin		
                        // fill with the corresponding image part				
                        imgPart[address*S*DATA_WIDTH+:S*DATA_WIDTH] = img[m*W*DATA_WIDTH+l*DATA_WIDTH+k*H*W*DATA_WIDTH+i*W*DATA_WIDTH+:S*DATA_WIDTH]; 
                        address = address + 1;
                    end
                end
            end
        end
    end
endmodule