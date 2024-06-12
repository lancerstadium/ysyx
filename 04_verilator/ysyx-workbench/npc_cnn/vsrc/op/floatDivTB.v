module floatDivTB();
    localparam  DATA_WIDTH              = 32;
    localparam  PERIOD                  = 100;
    reg                                 clk;
    reg                                 enb;
    wire                                ack;
    reg         [DATA_WIDTH-1:0]        A;
    reg         [DATA_WIDTH-1:0]        B;
    wire        [DATA_WIDTH-1:0]        C;
    wire        [DATA_WIDTH-1:0]        C32;

    floatDiv #(DATA_WIDTH) FA (
        .clk(clk),
        .enb(enb),
        .A(A), 
        .B(B),
        .C(C),
        .ack(ack)
    );

    // float16_to_float32_converter uut (
    //     .float16_input(C),
    //     .float32_output(C32)
    // );


    always 
        #(PERIOD/2) clk = ~clk;


    initial begin
        clk=1'b1; //positive edge first
        enb=1'b0;

        #(PERIOD);
        A=32'h40200000;     // 2.5
        B=32'h40800000;     // 4
        
        #(PERIOD);
        enb=1'b1;

        #(PERIOD);
        enb=1'b0;

        while (ack!=1'b1) begin //7 clock cycles to finish
            #(PERIOD);
        end
        $display("C=%b", C);                        // output is 2.89855074883 = 01000000001110011000000110000100(2.898550510406494)

        #(PERIOD);
        enb=1'b1;
        A=32'b10111110111111101111100111011011;     // input is -0.49799999594688416

        #(PERIOD);
        enb=1'b0;

        while (ack!=1'b1) begin //7 clock cycles to finish
            #(PERIOD);
        end
        $display("C=%b", C);               // output is -2.00803232193 = 10111110111111101111100111011011(-2.0080137252807617)

        // #(PERIOD*3);
        // enb=1'b0;

        #(PERIOD);
        enb=1'b1;
        A=32'h41B86666; // 23.05

        #(PERIOD);
        enb=1'b0;

        while (ack!=1'b1) begin //7 clock cycles to finish
            #(PERIOD);
        end
        $display("C=%b", C);               // output is -2.00803232193 = 10111110111111101111100111011011(-2.0080137252807617)

        //output is -2.00803232193
        $finish;
    end

endmodule


module float16_to_float32_converter(
    input [15:0] float16_input,
    output reg [31:0] float32_output
);

  // float16的位宽定义
  localparam FP16_EXP_WIDTH = 5;
  localparam FP16_MANT_WIDTH = 10;
  localparam FP32_EXP_WIDTH = 8;
  localparam FP32_MANT_WIDTH = 23;

  // float16的偏移量和float32的偏移量
  localparam FP16_BIAS = (2 ** (FP16_EXP_WIDTH - 1)) - 1;
  localparam FP32_BIAS = (2 ** (FP32_EXP_WIDTH - 1)) - 1;

  // 符号位、指数位和尾数位的提取
  wire sign = float16_input[15];
  wire [FP16_EXP_WIDTH-1:0] exponent = float16_input[14:10];
  wire [FP16_MANT_WIDTH-1:0] mantissa = float16_input[9:0];

  // 转换逻辑
  always @(*) begin
    if (exponent == 0) begin
      // 零或次正规数
      if (mantissa == 0) begin
        // 零值
        float32_output = {1'b0, 8'd0, 23'd0}; // +0.0
      end else begin
        // 次正规数需要特殊处理，这里简化处理
        float32_output = {sign, 8'd0, 23'd0}; // 次正规数转换为0.0
      end
    end else if (exponent == (2 ** FP16_EXP_WIDTH) - 1) begin
      // 无穷大或NaN
      if (mantissa == 0) begin
        // 无穷大
        float32_output = {sign, 8'd255, 23'd0};
      end else begin
        // NaN，这里简化为无穷大
        float32_output = {sign, 8'd255, 23'd0};
      end
    end else begin
      // 正规数
      reg [FP32_MANT_WIDTH-1:0] mantissa_out = {mantissa, 13'd0}; // 尾数右移，补零
      /* verilator lint_off WIDTHCONCAT */
      float32_output = {sign, (exponent + FP32_BIAS - FP16_BIAS), mantissa_out};
      /* verilator lint_on WIDTHCONCAT */
    end
  end

endmodule