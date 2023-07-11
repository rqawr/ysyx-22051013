module top(
		input   clk, in, reset,
	  output reg out,
		output reg [3:0] state
			
);
		
parameter[3:0] S0 =4'd0, S1 = 4'd1, S2 = 4'd2, S3 = 4'd3,
			          S4 = 4'd4, S5 = 4'd5, S6 = 4'd6, S7 = 4'd7, S8 = 4'd8;
							
reg [3:0] state_din, state_dout;
							
always@(posedge clk)begin 
	if(reset)begin
	  state_dout<=S0;
	end
	else begin state_dout<=state_din;end
end
														
assign state=state_dout;

MuxKeyWithDefault#(9, 4, 1) outMux(.out(out), .key(state_dout), .default_out(0), .lut({
															  S0, 1'b0,
																S1, 1'b0,
																S2, 1'b0,
																S3, 1'b0,
																S4, 1'b1,
																S5, 1'b0,
																S6, 1'b0,
																S7, 1'b0,
																S8, 1'b1
		}));
																								
MuxKeyWithDefault#(9, 4, 4) stateMux(.out(state_din), .key(state_dout), .default_out(S0), .lut({
																S0, in ? S5 : S1,
																S1, in ? S5 : S2,
																S2, in ? S5 : S3,
														    S3, in ? S5 : S4,
															  S4, in ? S5 : S4,
																S5, in ? S6 : S1,
																S6, in ? S7 : S1,
																S7, in ? S8 : S1,
																S8, in ? S8 : S1
	}));
endmodule
