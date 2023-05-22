

module ysyx_22051013_cache_tag_ram (
    input        wire                               clk,
    input        wire            [5:0]              addr,
    input        wire            [23:0]             tag_data_i,
    input        wire                               write_ena,
    output       wire            [22:0]             tag_data_o ,
    output       wire                               tag_valid
);

 reg [23:0] ram [0:63];
 reg [22:0] out_data  ;
 reg        out_vaild ;

 always @(posedge clk) begin
     if(write_ena) begin
         ram[addr] [22:0] <= tag_data_i[22:0];
         ram[addr] [23] <= tag_data_i[23];
     end 
         out_data <= ram[addr] [22:0];
         out_vaild <= ram[addr] [23];
 end

 assign tag_data_o = out_data;
 assign tag_valid = out_vaild;

endmodule 
