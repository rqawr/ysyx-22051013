
module ysyx_22051013_cache_data_ram (
    input        wire                               clk,
    input        wire            [4:0]              addr,
    input        wire            [63:0]             data_i,
    input        wire                               write_ena,
    output       wire            [63:0]             data_o 
);

 reg [63:0] ram [0:31];
 reg [63:0] out_data  ;

 always @(posedge clk) begin
     if(write_ena) begin
         ram[addr] <= data_i;
     end 
         out_data <= ram[addr];
 end

 assign data_o = out_data;

endmodule 
