module floatDivTB();
    localparam  DATA_WIDTH              = 32;
    localparam  PERIOD                  = 100;
    reg                                 clk;
    reg         [DATA_WIDTH-1:0]        A;
    reg         [DATA_WIDTH-1:0]        B;
    wire        [DATA_WIDTH-1:0]        C;

    floatDiv #(DATA_WIDTH) FA (
        .clk(clk),
        .A(A), 
        .B(B),
        .C(C)
    );


    always 
        #(PERIOD/2) clk = ~clk;


    initial begin
        clk=1'b1; //positive edge first
        A=32'h40200000;     // 2.5
        B=32'h40800000;     // 4

        #(PERIOD);
        A=32'b10111110111111101111100111011011;     // input is -0.49799999594688416

        #(PERIOD*2);
        A=32'h41B86666; // 23.05

        #(PERIOD*7/2);
        $display("C=%b", C);               // output is 2.89855074883 = 01000000001110011000000110000100(2.898550510406494)

        #(PERIOD*9/2);
        $display("C=%b", C);               // output is -2.00803232193 = 10111110111111101111100111011011(-2.0080137252807617)

        #(PERIOD*11/2);
        $display("C=%b", C);               // output is -2.00803232193 = 10111110111111101111100111011011(-2.0080137252807617)

        //output is -2.00803232193
        $finish;
    end

endmodule