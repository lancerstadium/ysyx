module ps2_keyboard(
    input                       clk,
    input                       rst_n,
    input                       ps2_clk,
    input                       ps2_data,

    output reg      [6: 0]      h0,
    output reg      [6: 0]      h1,
    output reg      [6: 0]      h2,
    output reg      [6: 0]      h3,
    output reg      [6: 0]      h4,
    output reg      [6: 0]      h5,
    output reg      [6: 0]      h6,
    output reg      [6: 0]      h7
);

    reg [9:0] buffer;                               // ps2_data bits
    reg [3:0] count;                                // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [7:0] key_cnt;
    reg       is_ctrl;
    reg       is_shift;
    wire [7:0] ascii;



    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (rst_n == 0) begin                      // reset
            count <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&             // start bit
                    (ps2_data)       &&             // stop bit
                    (^buffer[9:1])) begin           // odd  parity
                    $display("receive %x", buffer[8:1]);
                    if (buffer[8:1] == 8'h14) begin
                        is_ctrl = 1;
                    end
                    if (buffer[8:1] == 8'h12) begin
                        is_shift = 1;
                    end
                    if (buffer[8:1] == 8'hf0) begin
                        key_cnt = key_cnt + 8'h01;
                        is_ctrl = 0;
                        is_shift = 0;
                    end
                end
                count <= 0;                         // for next
              end else begin
                buffer[count] <= ps2_data;          // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end

    // ASCII code to 7-segment display
    key2ascii asc (
        .k( buffer[8:1]),
        .is_ctrl(is_ctrl),
        .is_shift(is_shift),
        .a(       ascii)
    );
    bcd7seg seg0(
        .b( ascii[3: 0]),
        .h(          h0)
    );
    bcd7seg seg1(
        .b( ascii[7: 4]),
        .h(          h1)
    );
    bcd7seg seg2(
        .b(buffer[4: 1]),
        .h(          h2)
    );
    bcd7seg seg3(
        .b(buffer[8: 5]),
        .h(          h3)
    );
    s7seg seg4(
        .b({3'b000, is_ctrl}),
        .h(          h4)
    );
    s7seg seg5(
        .b({3'b000, is_shift}),
        .h(          h5)
    );
    bcd7seg seg6(
        .b(key_cnt[3: 0]),
        .h(          h6)
    );
    bcd7seg seg7(
        .b(key_cnt[7: 4]),
        .h(          h7)
    );

endmodule


module key2ascii(
    input           [7:0]   k,
    input                   is_ctrl,
    input                   is_shift,
    output reg      [7:0]   a
);

    always @(*) begin
        if (!is_ctrl && is_shift) begin
            case (k)
                8'h1c: a = 8'h41;   // A
                8'h32: a = 8'h42;   // B
                8'h21: a = 8'h43;   // C
                8'h23: a = 8'h44;   // D
                8'h24: a = 8'h45;   // E
                8'h2b: a = 8'h46;   // F
                8'h34: a = 8'h47;   // G
                8'h33: a = 8'h48;   // H
                8'h43: a = 8'h49;   // I
                8'h3b: a = 8'h4a;   // J
                8'h42: a = 8'h4b;   // K
                8'h4b: a = 8'h4c;   // L
                8'h3a: a = 8'h4d;   // M
                8'h31: a = 8'h4e;   // N
                8'h44: a = 8'h4f;   // O
                8'h4d: a = 8'h50;   // P
                8'h15: a = 8'h51;   // Q
                8'h2d: a = 8'h52;   // R
                8'h1b: a = 8'h53;   // S
                8'h2c: a = 8'h54;   // T
                8'h3c: a = 8'h55;   // U
                8'h2a: a = 8'h56;   // V
                8'h1d: a = 8'h57;   // W
                8'h22: a = 8'h58;   // X
                8'h35: a = 8'h59;   // Y
                8'h1a: a = 8'h5a;   // Z

                8'h45: a = 8'h29;   // 0 => )
                8'h16: a = 8'h21;   // 1 => !
                8'h1e: a = 8'h40;   // 2 => @
                8'h26: a = 8'h23;   // 3 => #
                8'h25: a = 8'h2d;   // 4 => $
                8'h2e: a = 8'h25;   // 5 => %
                8'h36: a = 8'h3d;   // 6 => ^
                8'h3d: a = 8'h26;   // 7 => &
                8'h3e: a = 8'h2a;   // 8 => *
                8'h46: a = 8'h28;   // 9 => (

                default: a = 8'h00;
            endcase
        end else begin
            case (k)
                8'h1c: a = 8'h61;   // a
                8'h32: a = 8'h62;   // b
                8'h21: a = 8'h63;   // c
                8'h23: a = 8'h64;   // d
                8'h24: a = 8'h65;   // e
                8'h2b: a = 8'h66;   // f
                8'h34: a = 8'h67;   // g
                8'h33: a = 8'h68;   // h
                8'h43: a = 8'h69;   // i
                8'h3b: a = 8'h6a;   // j
                8'h42: a = 8'h6b;   // k
                8'h4b: a = 8'h6c;   // l
                8'h3a: a = 8'h6d;   // m
                8'h31: a = 8'h6e;   // n
                8'h44: a = 8'h6f;   // o
                8'h4d: a = 8'h70;   // p
                8'h15: a = 8'h71;   // q
                8'h2d: a = 8'h72;   // r
                8'h1b: a = 8'h73;   // s
                8'h2c: a = 8'h74;   // t
                8'h3c: a = 8'h75;   // u
                8'h2a: a = 8'h76;   // v
                8'h1d: a = 8'h77;   // w
                8'h22: a = 8'h78;   // x
                8'h35: a = 8'h79;   // y
                8'h1a: a = 8'h7a;   // z

                8'h45: a = 8'h30;   // 0
                8'h16: a = 8'h31;   // 1
                8'h1e: a = 8'h32;   // 2
                8'h26: a = 8'h33;   // 3
                8'h25: a = 8'h34;   // 4
                8'h2e: a = 8'h35;   // 5
                8'h36: a = 8'h36;   // 6
                8'h3d: a = 8'h37;   // 7
                8'h3e: a = 8'h38;   // 8
                8'h46: a = 8'h39;   // 9



                default: a = 8'h00;
            endcase
        end
    end

endmodule