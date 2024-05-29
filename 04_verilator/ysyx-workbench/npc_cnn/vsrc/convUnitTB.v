module convUnitTB ();
    parameter   DATA_WIDTH              = 32;                   // Data width
    parameter   D                       = 6;                    // Filter depth
    parameter   S                       = 5;                    // Filter size
    reg                                 clk, rst;
    reg         [D*S*S*DATA_WIDTH-1:0]  img, fit;               // we test with a fit whose size is 2*3*3 
    wire        [DATA_WIDTH-1:0]        res;

    localparam PERIOD = 100;

    always
        #(PERIOD/2) clk = ~clk;

    initial begin
        #0
        clk = 1'b0;
        rst = 1;
        // We test with an img part and a fit whose values are all 4 
        // The expected res is 288 generated after 20 clock cycles
        img = 4800'h408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000;
        fit = 4800'h408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000408000004080000040800000;
        
        #PERIOD
        rst = 0;
        
        #(20*PERIOD)
        $displayh(res);
        $finish;
    end
    convUnit #(
        .DATA_WIDTH(DATA_WIDTH),
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
