module divider  #(
    parameter DATA_WIDTH = 16                               // 数据位宽，默认为16位
) (
    input                           clk,                    // 时钟信号
    input                           rst,                    // 复位信号

    input       [DATA_WIDTH-1:0]    A_in,                   // 上级被除数
    input       [DATA_WIDTH-1:0]    B_in,                   // 上级除数
    input       [DATA_WIDTH-1:0]    C_in,                   // 上级输入商
    input       [DATA_WIDTH-1:0]    Max_in,                 // 上级最大值
    input       [DATA_WIDTH-1:0]    Min_in,                 // 上级最小值
    
    output reg  [DATA_WIDTH-1:0]    A_out,                  // 原始被除数
    output reg  [DATA_WIDTH-1:0]    B_out,                  // 原始除数
    output reg  [DATA_WIDTH-1:0]    C_out,                  // 运算输出商
    output reg  [DATA_WIDTH-1:0]    Max_out,                // 输出最大商
    output reg  [DATA_WIDTH-1:0]    Min_out                 // 输出最小商
);

    reg         [DATA_WIDTH-1:0]    A_reg;                  // 被除数寄存器
    reg         [DATA_WIDTH-1:0]    B_reg;                  // 除数寄存器
    reg         [DATA_WIDTH-1:0]    C_reg;                  // 商寄存器
    reg         [DATA_WIDTH-1:0]    Max_reg;                // 输出最大商寄存器
    reg         [DATA_WIDTH-1:0]    Min_reg;                // 输出最小商寄存器
    reg                             Cmp_reg;                // 比较寄存器：C < A / B

    reg         [DATA_WIDTH-1:0]    Add_reg;                // 获取和结果
    reg         [DATA_WIDTH-1:0]    Mid_reg;                // 获取一半的最大商作为搜索范围
    reg         [DATA_WIDTH-1:0]    product;                // 存储乘积结果

    adder       #(DATA_WIDTH)       add_inst    (clk, rst, Max_reg, Min_reg, Add_reg);
    multiplier  #(DATA_WIDTH)       mul_inst    (clk, rst, B_reg, Mid_reg, product);
    

    // 二分查找逼近除法解，每次时钟上升沿逼近一次
    always @(posedge clk) begin
        if (rst) begin
            A_reg <= 0;
            B_reg <= 0;
            C_reg <= 0;
            Max_reg <= 0;
            Min_reg <= 0;
        end else begin
            A_reg <= A_in;
            B_reg <= B_in;
            C_reg <= C_in;
            Max_reg <= (C_reg == 0) ? A_in : Max_in;
            Min_reg <= Min_in;
            if (B_reg == 0) begin
                // 除数为0时，不进行除法运算，商保持为0
                C_reg <= 0;
                Max_out <= Max_reg;
                Min_out <= Min_reg;
                C_out <= 0;
            end else if (A_reg >= B_reg) begin
                // 被除数大于等于除数，进行一次逼近
                Mid_reg = Add_reg >> 1; 
                if (product < A_reg) begin
                    // 如果乘积小于等于被除数
                    C_reg <= Mid_reg;      // 更新最大商
                    Max_out <= Max_reg; 
                    Min_out <= Mid_reg; 
                end else if (product > A_reg) begin
                    C_reg <= Mid_reg;      // 更新最大商
                    Max_out <= Mid_reg;
                    Min_out <= Min_reg;
                end else begin
                    C_reg <= Mid_reg; 
                    Max_out <= Mid_reg;
                    Min_out <= Mid_reg;
                end
                
                // 更新输出值
                C_out <= C_reg;
                // $display("%d / %d = %d  (%d, %d ~%d)", A_in, B_in, C_out, product, Min_out, Max_out);
            end else begin
                // 如果被除数小于除数，保持商不变
                C_out <= C_reg;
                Max_out <= Max_reg;
                Min_out <= Min_reg;
            end
        end
        // 更新输出寄存器
        A_out <= A_reg;
        B_out <= B_reg;
    end

    
endmodule