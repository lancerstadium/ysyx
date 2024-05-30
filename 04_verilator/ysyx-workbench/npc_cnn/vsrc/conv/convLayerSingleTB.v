module convLayerSingleTB ();
    parameter   DATA_WIDTH              = 16;                   // Data width
    parameter   FLOAT_MODE              = 0;                    // 0: SInt, 1: Float
    parameter   D                       = 1;                    // fit depth
    parameter   S                       = 3;                    // fit size 5
    parameter   H                       = 5;                   // img height 32
    parameter   W                       = 5;                   // img width 32
    reg                                 clk, rst;               // Signal
    reg         [D*H*W*DATA_WIDTH-1: 0] img;                    // We test with a 1*32*32 img
    reg         [D*S*S*DATA_WIDTH-1: 0] fit;                    // We test with a 1*5*5 fit
    reg signed  [DATA_WIDTH-1:0]        tmp;
    wire        [(H-S+1)*(W-S+1)*DATA_WIDTH-1: 0] res;          // Number of fits applied

    localparam  PERIOD                  = 100;

    integer i, clkCnt;

    always
        #(PERIOD/2) clk = ~clk;

    always @ (posedge clk) begin
        clkCnt = clkCnt + 1;
    end

    initial begin
        #0
        clkCnt = 0;
        clk = 1'b0;
        rst = 1;
        //We test with the first img and the fits of the first layer of LeNet
        // img = 16384'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000326638fd3bf038fd32460000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000032063b773be83be83be83b6f000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000032c73b1f3bf03be83b7f3b4f3be833272606000000000000000000000000000000000000000000000000000000000000000000000000000000000000290533883b073be83bf03be83a5635453be83bf037a8000000000000000000000000000000000000000000000000000000000000000000000000000000000000391d3be83be83be83bf03be83be8360639ee3bf0393d0000000000000000000000000000000000000000000000000000000000000000000000000000000032663b773bf03bf039f637273bf03b2731e634f53c003945000000000000000000000000000000000000000000000000000000000000000000000000000032063b773be83be8399e2a0634b537982d45000000003bf03ba032460000000000000000000000000000000000000000000000000000000000000000000030c5392d3bf03b4f3a8735450000000000000000000000003bf03be8392d0000000000000000000000000000000000000000000000000000000000000000270739963be83b8834742cc52f070000000000000000000000003bf03be83a1e000000000000000000000000000000000000000000000000000000000000000033273be83be833e80000000000000000000000000000000000003bf03be83a1e00000000000000000000000000000000000000000000000000000000000000003a363bf039f600000000000000000000000000000000000000003c003bf03a2600000000000000000000000000000000000000000000000000000000000034c53bb83be8370700000000000000000000000000000000000000003bf03be838a500000000000000000000000000000000000000000000000000000000000035553be83b372e46000000000000000000000000000000002707383c3bf039d62a0600000000000000000000000000000000000000000000000000000000000035553be83aff000000000000000000000000000000002707381c3be83b0f3474000000000000000000000000000000000000000000000000000000000000000035553be8388d00000000000000000000000000003206392d3be8396d00000000000000000000000000000000000000000000000000000000000000000000000035653bf03b0f00000000000000000000000037273b773bf03915000000000000000000000000000000000000000000000000000000000000000000000000000035553be83bd0389532062f47355539963b0f3bf03aff393d3307000000000000000000000000000000000000000000000000000000000000000000000000000035553be83be83be83b2f3abf3be83be83be83a2638140000000000000000000000000000000000000000000000000000000000000000000000000000000000002f073a3e3be83be83bf03be83be83b4f388d0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002e4638043be83bf03be8386c30a50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
        // fit = 400'h346b33f83146351432de310e2cc624deb409b3a2b61ab4c8b679b63bb455b48d2b45b08b2bdbb4c0b536b4b9b598b810b521;
        img = 400'h00000001000200030004_00010002000300040005_00020003000400050006_00030004000500060007_00040005000600070008;
        fit = 144'h000000010000_00010000ffff_0000ffff0000;

        $display("[img]: ");
        for (i = H*W-1; i >=0; i = i - 1) begin
            tmp = img[i*DATA_WIDTH+:DATA_WIDTH];
            $write(" %4d", tmp);
            if(i % (W) == 0)begin
                $display(""); 
            end
        end 
        $display("[fit]: ");
        for (i = S*S-1; i >=0; i = i - 1) begin
            tmp = fit[i*DATA_WIDTH+:DATA_WIDTH];
            $write(" %4d", tmp);
            if(i % (S) == 0)begin
                $display(""); 
            end
        end 

        #PERIOD
        rst = 0;
        

        #((56*28+1)*PERIOD) // we wait for extra clock cycles to prove that the result does not change with extra clock cycles can be used in pipelining
        $display("[conv1]: ");
        for (i = (H-S+1)*(W-S+1)-1; i >=0; i = i - 1) begin
            tmp = res[i*DATA_WIDTH+:DATA_WIDTH];
            $write(" %4d", tmp);
            if(i % (W-S+1) == 0)begin
                $display(""); 
            end
        end 
        $finish;
    end

    convLayerSingle #( 
        .DATA_WIDTH(DATA_WIDTH),
        .FLOAT_MODE(FLOAT_MODE),
        .D(D),
        .H(H),
        .W(W),
        .S(S)
    ) UUT (
        .clk(clk),
        .rst(rst),
        .img(img),
        .fit(fit),
        .res(res)
    );

endmodule