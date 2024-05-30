module convUnitTB ();
    parameter   DATA_WIDTH              = 16;                   // Data width
    parameter   FLOAT_MODE              = 0;                    // 0: SInt, 1: Float
    parameter   D                       = 1;                    // Filter depth
    parameter   S                       = 5;                    // Filter size
    reg                                 clk, rst;               // Signal
    /* verilator lint_off ASCRANGE */
    reg         [D*S*S*DATA_WIDTH-1: 0] img, fit;               // Test Data 
    wire        [DATA_WIDTH      -1: 0] res;                    // Conv Result
    /* verilator lint_on ASCRANGE */
    reg signed  [DATA_WIDTH-1:0]        tmp;
    localparam  PERIOD                  = 100;                  // Clock Period
    integer i;

    always
        #(PERIOD/2) clk = ~clk;

    initial begin
        #0
        clk = 1'b0;
        rst = 1;
        // We test with an img part and a fit whose values are all 4 
        // The expected res is 288 generated after 20 clock cycles
        img = 400'h00000001000200030004_00010002000300040005_00020003000400050006_00030004000500060007_00040005000600070008;
        fit = 400'h00000001000100010000_00010000000000000001_00010000000000000001_00010000000000000001_00000001000100010000;        
        $display("[img]: ");
        for (i = S*S-1; i >=0; i = i - 1) begin
            tmp = img[i*DATA_WIDTH+:DATA_WIDTH];
            $write(" %4d", tmp);
            if(i % (S) == 0)begin
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
        
        #(30*PERIOD)
        $display("[conv]: %4d", res);
        $finish;
    end
    convUnit #(
        .DATA_WIDTH(DATA_WIDTH),
        .FLOAT_MODE(FLOAT_MODE),
        .D(D),
        .S(S)
    ) UUT (
        .clk(clk),
        .rst(rst),
        .img(img),
        .fit(fit),
        .res(res)
    );

endmodule
