module mux21(
    input           a,
    input           b,
    input           s,
    output reg      y
);

    assign y = (~s&a) | (s&b);

endmodule