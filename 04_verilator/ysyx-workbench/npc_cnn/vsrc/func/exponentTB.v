module exponentTB();
    localparam  DATA_WIDTH              = 32;
    reg         [DATA_WIDTH - 1: 0]     X;
    reg                                 clk;
    reg                                 enb;
    wire        [DATA_WIDTH - 1: 0]     Y;
    wire                                ack; 
    exponent #(.DATA_WIDTH(DATA_WIDTH)) exp (.X(X),.clk(clk),.Y(Y),.ack(ack),.enb(enb));

    localparam PERIOD = 100;
    always 
        #(PERIOD/2) clk = ~clk;

    initial begin
        clk=1'b1;
        X=32'b00111111010101100110110011110100; //0.8376
        enb=1'b0;
        #(PERIOD);
        enb=1'b1;
        while (ack!=1'b1) begin //7 clock cycles to finish
            #(PERIOD);
        end
        //output is 2.31074953079 and real should be 2.310814361840001 
        $display("y=%b", Y);
        X=32'b10111111011101011100001010001111; //-0.96
        enb=1'b0;
        #(PERIOD);
        enb=1'b1;
        while (ack!=1'b1) begin //7 clock cycles to finish
            #(PERIOD);
        end
        $display("y=%b", Y);
        // output is 0.383025914431 and real should be 0.38289288597511206
        $finish;
    end

endmodule