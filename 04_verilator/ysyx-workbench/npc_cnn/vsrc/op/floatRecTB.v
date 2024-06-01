module floatRecTB();
    localparam  DATA_WIDTH              = 32;
    localparam  PERIOD                  = 100;
    reg                                 clk;
    reg         [DATA_WIDTH-1:0]        X;
    wire        [DATA_WIDTH-1:0]        Y;

    floatRec #(DATA_WIDTH) FA (
        .clk(clk),
        .X(X), 
        .Y(Y)
    );


    always 
        #(PERIOD/2) clk = ~clk;


    initial begin
        clk=1'b1; //positive edge first
        X=32'b00111110101100001010001111010111;     // input is 0.345
        #(PERIOD);
        $display("X=%b, Y=%b", X, Y);               // output is 2.89855074883 = 01000000001110011000000110000100(2.898550510406494)


        X=32'b10111110111111101111100111011011;     // input is -0.49799999594688416
        #(PERIOD);
        $display("X=%b, Y=%b", X, Y);               // output is -2.00803232193 = 10111110111111101111100111011011(-2.0080137252807617)

        //output is -2.00803232193
        $finish;
    end

endmodule