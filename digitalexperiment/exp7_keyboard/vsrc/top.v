module top(
input clk,
input reset,
input ps2_clk,
input ps2_data,

output reg [7:0] data,
output reg [13:0] null_seg,
output reg [27:0] res_seg,
output reg [13:0] num_seg
);

reg [7:0] cnt;
reg [7:0] asc;
reg [7:0] scancode;
reg cnt_flag;
reg [3:0] ps2cnt;
reg [1:0] en;

assign null_seg={14{1'b1}};

always@(posedge clk,posedge reset) begin
		
		if(reset)begin
			cnt_flag<=0;
			en<=2'b01;
		
		end
		else if(data==8'hF0)	begin
			cnt_flag<=1;
			en<=2'b10;
			end
		else if(ps2cnt==4'd10)begin
	               en<=en>>1;
		
		end
		else begin cnt_flag<=0;end
	end
      
always@(posedge cnt_flag,posedge reset)begin
            if(cnt==8'hff|reset) begin
              cnt<=0;end
            else begin cnt<=cnt+8'b1;end
            end
            
always@(posedge clk)begin
           if(en==2'b00)begin
             scancode<=data; end
           else begin scancode<=8'b11111111;end
           end
      
	ps2_keyboard p1(
		.clk(clk),
		.resetn(~reset),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data),
		.data(data),
		.count(ps2cnt));

	ascii a1(
		.data(scancode),
		.asc(asc));

		seg seg0(
		  .b(scancode[3:0]),
			.h(res_seg[6:0]));

		seg seg1(
	   	.b(scancode[7:4]),
			.h(res_seg[13:7]));

		seg seg3(
			.b(asc[3:0]),
			.h(res_seg[20:14]));

		seg seg4(
			.b(asc[7:4]),
			.h(res_seg[27:21]));

	  seg seg6(
			.b(cnt[3:0]),
			.h(num_seg[6:0]));

	  seg seg7(
			.b(cnt[7:4]),
			.h(num_seg[13:7]));

endmodule
