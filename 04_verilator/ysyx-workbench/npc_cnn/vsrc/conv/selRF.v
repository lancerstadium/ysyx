module selRF #(
    parameter   DATA_WIDTH              = 32,                   // Data width, default: 32 bits
    parameter   D                       = 1,                    // Filter depth, default: 1
    parameter   S                       = 5,                    // Filter size , default: 5
    parameter   H                       = 32,                   // Image height, default: 32
    parameter   W                       = 32                    // Image width , default: 32
) (
    /* verilator lint_off ASCRANGE */
    input       [0: D*H*W*DATA_WIDTH-1] img,                    // Full Image
    input       [5: 0]                  rowNum,                 // Row Number of Image
    input       [5: 0]                  colSel,
    output reg  [0: (((W-S+1)/2)*D*S*S*DATA_WIDTH)-1] imgPart   // array to hold the matrices (parts of the image) to be sent to the conv units
    /* verilator lint_on ASCRANGE */
);

    // address: counter to fill the receptive filed array
    // c: counter to loop on the columns of the input image
    // k: counter to loop on the depth of the input image
    // i: counter to loop on the rows of the input image
    integer     address, c, k, i;

    always @ (img or rowNum or colSel) begin
        address = 0;
        if (colSel == 0) begin //if the colSel is zero fill the array with the parts of the image correspoding to the first half of pixels of the row (with rowNum) of the output image
            for (c = 0; c < (W-S+1)/2; c = c + 1) begin
                for (k = 0; k < D; k = k + 1) begin
                    for (i = 0; i < S; i = i + 1) begin
                        imgPart[address*S*DATA_WIDTH+:S*DATA_WIDTH] = img[rowNum*W*DATA_WIDTH+c*DATA_WIDTH+k*H*W*DATA_WIDTH+i*W*DATA_WIDTH+:S*DATA_WIDTH];
                        address = address + 1;
                    end
                end
            end
        end else begin //if the colSel is zero fill the array with the parts of the image correspoding to the second half of pixels of the row (with rowNum) of the output image
            for (c = (W-S+1)/2; c < (W-S+1); c = c + 1) begin
                for (k = 0; k < D; k = k + 1) begin
                    for (i = 0; i < S; i = i + 1) begin
                        imgPart[address*S*DATA_WIDTH+:S*DATA_WIDTH] = img[rowNum*W*DATA_WIDTH+c*DATA_WIDTH+k*H*W*DATA_WIDTH+i*W*DATA_WIDTH+:S*DATA_WIDTH];
                        address = address + 1;
                    end
                end
            end
        end
    end

endmodule
