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
    wire [inputNum-1:0] acksExp; //acknowledge signals of exponents 
    wire ackDiv; //ack signal of the division unit

    reg enbDiv; //signal to enb division unit initially zero
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

    floatAdd FADD1 (exponents[DATA_WIDTH*addCnt+:DATA_WIDTH],outExpReg,expSum);
    floatRec #(.DATA_WIDTH(DATA_WIDTH)) FR (.X(expSum),.clk(clk),.Y(expRec),.ack(ackDiv),.enb(enbDiv));
    floatMul FM1 (exponents[DATA_WIDTH*mulCnt+:DATA_WIDTH],expRec,outMul); //multiplication with reciprocal

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
