module convLayerMulti #(
    parameter   DATA_WIDTH              = 32,                   // Data width, default: 32 bits
    parameter   FLOAT_MODE              = 1,                    // 0: SInt, 1: Float
    parameter   D                       = 1,                    // Filter depth, default: 1
    parameter   S                       = 5,                    // Filter size , default: 5
    parameter   H                       = 32,                   // Image height, default: 32
    parameter   W                       = 32,                   // Image width , default: 32
    parameter   K                       = 6                     // Number of fits applied
) (
    input                               clk,                    // Clock Signal
    input                               rst,                    // Reset Signal
    /* verilator lint_off ASCRANGE */
    input       [0:D*H*W*DATA_WIDTH-1]  img,
    input       [0:K*D*S*S*DATA_WIDTH-1] fits,
    output reg  [0:K*(H-S+1)*(W-S+1)*DATA_WIDTH-1] res
    /* verilator lint_on ASCRANGE */
);
    /* verilator lint_off ASCRANGE */
    reg         [0:2*D*S*S*DATA_WIDTH-1] inFits; //the 2 selected fits that are inputs to the 2 instances of conv layer single filter
    wire        [0:2*(H-S+1)*(W-S+1)*DATA_WIDTH-1] resSingle; //The output of the 2 instances of conv layer single filter
    /* verilator lint_on ASCRANGE */
    reg         gRst; // to control the 2 instances of conv layer single filter

    //fitIdx: clkCnt to index and select the 2 fits to be sent to the 2 instances of conv layer single filter
    //clkCnt: counts the clock cycles need for the 2 instances of conv layer single filter to finish the convolution process
    // outputCounter: to connect the output of the 2 instances of conv layer single filter to the output of the whole module
    integer     fitIdx, clkCnt, outputCounter;

    genvar i;

    generate // we generate 2 instances of conv layer single filter
        for (i = 0; i < 2; i = i + 1) begin 
            convLayerSingle #(
                .DATA_WIDTH(DATA_WIDTH),
                .FLOAT_MODE(FLOAT_MODE),
                .D(D),
                .S(S),
                .H(H),
                .W(W)
            ) UUT (
                .clk(clk),
                .rst(gRst),
                .img(img),
                .fit(inFits[i*D*S*S*DATA_WIDTH+:D*S*S*DATA_WIDTH]),
                .res(resSingle[i*(H-S+1)*(W-S+1)*DATA_WIDTH+:(H-S+1)*(W-S+1)*DATA_WIDTH])
            );
        end
    endgenerate

    always @ (posedge clk or posedge rst) begin
        if (rst == 1'b1) begin
            gRst = 1'b1;
            fitIdx = 0;
            clkCnt = 0;
            outputCounter = 0;		
        end else if (fitIdx < K/2) begin
            if (clkCnt == ((((H-S+1)*(W-S+1))/((H-S+1)/2))*(D*S*S+3)+1)) begin //the number of clock cycles need for the 2 instances of conv layer single filter to finish the convolution process on the input fits
                outputCounter = outputCounter + 1;
                clkCnt = 0;
                gRst = 1'b1;
                fitIdx = fitIdx + 1;
            end else begin
                gRst = 0;
                clkCnt = clkCnt + 1;
            end
        end
    end

    always @ (*) begin
        // connecting the selected fits with the 2 instances of conv layer single filter 
        inFits = fits[fitIdx*2*D*S*S*DATA_WIDTH+:2*D*S*S*DATA_WIDTH];
        // connecting the output of the 2 instances of conv layer single filter with the output of the whole module
        res[outputCounter*2*(H-S+1)*(W-S+1)*DATA_WIDTH+:2*(H-S+1)*(W-S+1)*DATA_WIDTH] = resSingle;
    end


endmodule