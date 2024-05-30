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
    /* verilator lint_off ASCRANGE */
    input       [0: D*H*W*DATA_WIDTH-1] img,                    // Full Image
    input       [0: D*S*S*DATA_WIDTH-1] fit,                    // Filter: Conv Kernel
    output reg  [0: (H-S+1)*(W-S+1)*DATA_WIDTH-1]   res         // Conv Single Layer Res
    /* verilator lint_on ASCRANGE */
);
    /* verilator lint_off ASCRANGE */
    wire        [0: ((W-S+1)/2)*DATA_WIDTH-1]       cuRes;      // output of the conv units and input to the row selector
    wire        [0: (((W-S+1)/2)*D*S*S*DATA_WIDTH)-1] imgPart;  // array of the matrices to be sent to conv units
    /* verilator lint_on ASCRANGE */
    reg                                 gRst;
    reg         [S: 0]                  rowNum, colSel; 
    integer                             clkCnt, cuCnt;

    selRF #(
        .DATA_WIDTH(DATA_WIDTH),
        .D(D),
        .H(H),
        .W(W),
        .S(S)
    ) RF (
        .img(img),
        .rowNum(rowNum),
        .colSel(colSel),
        .imgPart(imgPart)
    );
    
    genvar n;
    
    generate //generating n convolution units where n is half the number of pixels in one row of the output img
        for (n = 0; n < (H-S+1)/2; n = n + 1) begin 
            convUnit #(
                .DATA_WIDTH(DATA_WIDTH),
                .FLOAT_MODE(FLOAT_MODE),
                .D(D),
                .S(S)
            ) CU (
                .clk(clk),
                .rst(gRst),
                .img(imgPart[n*D*S*S*DATA_WIDTH+:D*S*S*DATA_WIDTH]),
                .fit(fit),
                .res(cuRes[n*DATA_WIDTH+:DATA_WIDTH])
            );
        end
    endgenerate
    
    always @ (posedge clk or posedge rst) begin
        if (rst == 1'b1) begin
            gRst = 1'b1;
            rowNum = 0;
            colSel = 0;
            clkCnt = 0;
            cuCnt = 0;
        end else if (rowNum < H-S+1) begin
            if (clkCnt == D*S*S+2) begin //The conv unit finishes ater 1*5*5+2 clock cycles
                cuCnt = cuCnt + 1;
                clkCnt = 0;
                gRst = 1'b1;
                if (colSel == 0) begin
                    colSel = (H-S+1)/2;
                end else begin
                    rowNum = rowNum + 1;
                    colSel = 0;
                end
            end else begin
                gRst = 0;
                clkCnt = clkCnt + 1;
            end
        end
    end
    
    always @ (*) begin // connecting the output of the conv units with the output of the module
        res[cuCnt*((W-S+1)/2)*DATA_WIDTH+:((W-S+1)/2)*DATA_WIDTH] = cuRes;
    end

endmodule