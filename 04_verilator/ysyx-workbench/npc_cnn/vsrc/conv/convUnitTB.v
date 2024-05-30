module convUnitTB ();
    parameter   DATA_WIDTH              = 16;                   // Data width
    parameter   FLOAT_MODE              = 1;                    // 0: SInt, 1: Float
    parameter   D                       = 1;                    // Filter depth
    parameter   S                       = 5;                    // Filter size
    reg                                 clk, rst;               // Signal
    /* verilator lint_off ASCRANGE */
    reg         [0: D*S*S*DATA_WIDTH-1] img, fit;               // Test Data 
    wire        [0: DATA_WIDTH      -1] res;                    // Conv Result
    /* verilator lint_on ASCRANGE */
    localparam  PERIOD                  = 100;                  // Clock Period

    always
        #(PERIOD/2) clk = ~clk;

    initial begin
        #0
        clk = 1'b0;
        rst = 1;
        // We test with an img part and a fit whose values are all 4 
        // The expected res is 288 generated after 20 clock cycles
        img = 400'h4400440044004400440044004400440044004400440044004400440044004400440044004400440044004400440044004400;
        fit = 400'h4400440044004400440044004400440044004400440044004400440044004400440044004400440044004400440044004400;        

        #PERIOD
        rst = 0;
        
        #(20*PERIOD)
        $displayh(res);
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
