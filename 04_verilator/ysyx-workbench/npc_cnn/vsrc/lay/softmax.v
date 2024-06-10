module softmax(inputs,clk,enb,outputs,ackSoft);
    parameter DATA_WIDTH=32;
    localparam inputNum=10;
    input [DATA_WIDTH*inputNum-1:0] inputs;
    input clk;
    input enb;
    output reg [DATA_WIDTH*inputNum-1:0] outputs;
    output reg ackSoft;

    wire [DATA_WIDTH-1:0] expSum;
    wire [DATA_WIDTH-1:0] expRec;
    wire [DATA_WIDTH-1:0] outMul;
    wire [DATA_WIDTH*inputNum-1:0] exponents ;
    wire [inputNum-1:0] acksExp;                // acknowledge signals of exponents 
    wire ackDiv;                                // ack signal of the division unit

    reg enbDiv;                                 // signal to enb division unit initially zero
    reg [DATA_WIDTH-1:0] outExpReg;
    reg [3:0] mulCnt;
    reg [3:0] addCnt;

    genvar i;
    generate
        for (i = 0; i < inputNum; i = i + 1) begin
            exponent #(.DATA_WIDTH(DATA_WIDTH)) exp (
            .X(inputs[DATA_WIDTH*i+:DATA_WIDTH]),
            .enb(enb),
            .clk(clk),
            .Y(exponents[DATA_WIDTH*i+:DATA_WIDTH]),
            .ack(acksExp[i]));
        end
    endgenerate

    floatAdd #(.DATA_WIDTH(DATA_WIDTH)) FADD1 (exponents[DATA_WIDTH*addCnt+:DATA_WIDTH],outExpReg,expSum);
    floatRec #(.DATA_WIDTH(DATA_WIDTH)) FR (.X(expSum),.clk(clk),.Y(expRec),.ack(ackDiv),.enb(enbDiv));
    floatMul #(.DATA_WIDTH(DATA_WIDTH)) FM1 (exponents[DATA_WIDTH*mulCnt+:DATA_WIDTH],expRec,outMul); //multiplication with reciprocal

    always @ (negedge clk) begin
        if(enb==1'b1) begin
            if(ackSoft==1'b0) begin 
                if(acksExp[0]==1'b1) begin //if the exponents finished
                    if(enbDiv==1'b0) begin //division still did not start
                        if(addCnt<4'b1001) begin
                            addCnt=addCnt+1;
                            outExpReg=expSum;
                        end
                        else begin
                            enbDiv=1'b1;
                        end
                    end
                    else if(ackDiv==1'b1) begin //check if the reciprocal is ready
                        if(mulCnt<4'b1010) begin
                            outputs[DATA_WIDTH*mulCnt+:DATA_WIDTH]=outMul;
                            mulCnt=mulCnt+1;
                        end
                        else begin
                            ackSoft=1'b1;
                        end
                    end
                end
            end
        end
        else begin
            //if enb is off reset all counters and acks
            mulCnt=4'b0000;
            addCnt=4'b0000;
            outExpReg=32'b00000000000000000000000000000000;
            ackSoft=1'b0;
            enbDiv=1'b0;
        end
        
end

endmodule



module softmax1(inputs,clk,enb,outputs,ackSoft);
    parameter DATA_WIDTH=32;
    localparam inputNum=10;
    input [DATA_WIDTH*inputNum-1:0] inputs;
    input clk;
    input enb;
    output reg [DATA_WIDTH*inputNum-1:0] outputs;
    output reg ackSoft;

    wire [DATA_WIDTH-1:0] expSum;
    wire [DATA_WIDTH-1:0] expRec;
    wire [DATA_WIDTH-1:0] outMul;
    wire [DATA_WIDTH*inputNum-1:0] exponents ;
    wire [inputNum-1:0] acksExp; //acknowledge signals of exponents 
    // wire ackDiv; //ack signal of the division unit
    wire [DATA_WIDTH-1:0] expSums [inputNum:0]; //used in the multiple adders to connected to each other
    reg [3:0] mulCounter;

    assign expSums[0]=32'b00000000000000000000000000000000; //first one is zero to move the flow
    assign expSum=expSums[inputNum]; //last one in the sum

    genvar i;
    generate
        for (i = 0; i < inputNum; i = i + 1) begin
            exponent #(.DATA_WIDTH(DATA_WIDTH)) exp (
            .X(inputs[DATA_WIDTH*i+:DATA_WIDTH]),
            .enb(enb),
            .clk(clk),
            .Y(exponents[DATA_WIDTH*i+:DATA_WIDTH]),
            .ack(acksExp[i]));
        end
    endgenerate //generating 10 parallel exponent modules 

    genvar j;
    generate 
        for (j = 0; j < inputNum; j = j + 1) begin
            floatAdd #(.DATA_WIDTH(DATA_WIDTH)) FADD1 (exponents[DATA_WIDTH*j+:DATA_WIDTH],expSums[j],expSums[j+1]);
        end
    endgenerate //generating 10 parallel adding modules to get the sum of the exponents

    floatRec #(.DATA_WIDTH(DATA_WIDTH)) FR (.X(expSum),.clk(clk),.Y(expRec));//getting reciprocal of the sum of exponents
    //reciprocal activated when exponent finished
    floatMul #(.DATA_WIDTH(DATA_WIDTH)) FM1 (exponents[DATA_WIDTH*mulCounter+:DATA_WIDTH],expRec,outMul); //multiplication with reciprocal

    always @ (negedge clk) begin
        if(enb==1'b1) begin
            if(ackSoft==1'b0) begin 
                // if(ackDiv==1'b1) begin //check if the reciprocal is ready
                    if(mulCounter<4'b1010) begin
                        outputs[DATA_WIDTH*mulCounter+:DATA_WIDTH]=outMul;
                        mulCounter=mulCounter+1;
                    end
                    else begin
                        ackSoft=1'b1;
                    end
                // end
            end
        end
        else begin
            //if enb is off reset all counters and acks
            mulCounter=4'b0000;
            ackSoft=1'b0;
        end
        
    end

endmodule



module softmax2(inputs,clk,enb,outputs,ackSoft);
    parameter DATA_WIDTH=32;
    localparam inputNum=10;
    input [DATA_WIDTH*inputNum-1:0] inputs;
    input clk;
    input enb;
    output [DATA_WIDTH*inputNum-1:0] outputs;
    output ackSoft;

    wire [DATA_WIDTH-1:0] expSum;
    wire [DATA_WIDTH-1:0] expRec;
    wire [DATA_WIDTH*inputNum-1:0] exponents ;
    wire [inputNum-1:0] acksExp; //acknowledge signals of exponents 
    wire ackDiv; //ack signal of the division unit
    wire [DATA_WIDTH-1:0] expSums [inputNum:0]; //used in the multiple adders to connected to each other

    assign expSums[0]=32'b00000000000000000000000000000000; //first one is zero to move the flow
    assign expSum=expSums[inputNum]; //last one in the sum
    assign ackSoft=ackDiv;

    genvar i;
    generate
        for (i = 0; i < inputNum; i = i + 1) begin
            exponent #(.DATA_WIDTH(DATA_WIDTH)) exp (
            .X(inputs[DATA_WIDTH*i+:DATA_WIDTH]),
            .enb(enb),
            .clk(clk),
            .Y(exponents[DATA_WIDTH*i+:DATA_WIDTH]),
            .ack(acksExp[i]));
        end
    endgenerate //generating 10 parallel exponent modules 

    genvar j;
    generate 
        for (j = 0; j < inputNum; j = j + 1) begin
            floatAdd #(.DATA_WIDTH(DATA_WIDTH)) FADD1 (exponents[DATA_WIDTH*j+:DATA_WIDTH],expSums[j],expSums[j+1]);
        end
    endgenerate //generating 10 parallel adding modules to get the exponent sum

    floatRec #(.DATA_WIDTH(DATA_WIDTH)) FR (.X(expSum),.clk(clk),.Y(expRec),.ack(ackDiv),.enb(acksExp[0]));// get the reciprocal of the exponent sum
    //reciprocal activated when exponent finished
    genvar z;
    generate
        for (z = 0; z < inputNum; z = z + 1) begin
            floatMul #(.DATA_WIDTH(DATA_WIDTH)) FM1 (exponents[DATA_WIDTH*z+:DATA_WIDTH],expRec,outputs[DATA_WIDTH*z+:DATA_WIDTH]); //multiplication with reciprocal
        end
    endgenerate //generating 10 multiplication unit to multiply every exponent with the reciprocal


endmodule