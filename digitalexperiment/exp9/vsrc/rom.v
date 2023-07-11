module rom(
	input       clk,
	input      ps2_clk,
	input [9:0] v_addr,
	input [9:0] h_addr,
	input [7:0] ascii,
	
	output reg [23:0] data
);
	

   wire [9:0] rom_x;
   wire [9:0] rom_y;
   wire [9:0] char_x;
   wire [11:0] char_y;
   wire [11:0] char_data;
   
   wire [7:0] curr_char;

reg [11:0] vga_font [4095:0];
reg [7:0]  screen_ram[0:29][0:69];

   
   assign rom_x = h_addr / 9;
   assign rom_y = v_addr / 16;
   
   assign curr_char =h_addr < 10'd640 ? screen_ram[rom_y[4:0]][rom_x[6:0]] : 8'b0;
   
   assign char_x = (h_addr % 9);
   assign char_y = {curr_char[7:0], v_addr[3:0]};
   assign char_data = vga_font[char_y];

integer i,j;

initial begin

  for (i = 0; i < 30; i = i+1)
      for (j = 0; j < 70; j = j+1)
         screen_ram[i][j] = 8'b0;
    $readmemh("resource/vga_font.txt", vga_font);

/*
   screen_ram[0][0] = 8'h68;screen_ram[0][1] = 8'h65;
   screen_ram[0][2] = 8'h6C;screen_ram[0][3] = 8'h6C;
   screen_ram[0][4] = 8'h6F;screen_ram[0][5] = 8'h2C;
   screen_ram[0][7] = 8'h77;screen_ram[0][8] = 8'h6F;
   screen_ram[0][9] = 8'h72;screen_ram[0][10] = 8'h6C;
   screen_ram[0][11] = 8'h64;screen_ram[0][12] = 8'h21;
   */
end



always @(posedge clk) begin
	data <= char_data[char_x[3:0]]? 24'hffffff : 24'h000000;
end

reg [3:0] cnt = 0;
reg [11:0] block_x = 0;
reg [11:0] block_y = 0;
reg enter_flag = 1;

always @(posedge ps2_clk) begin
  if(ascii!=0)  begin	
  	if(cnt == 0) begin
  		if(ascii == 8'h0d) begin //enter
  			block_x <= 0;
  			block_y <= block_y +1;
  			enter_flag <= 0;
  		end
  		else begin 
			if(enter_flag == 0) begin
				block_x <= block_x;
				block_y <= block_y;
			end
			else begin
				if(block_x==70) begin
					block_x <= 0;
					block_y <=block_y+1;
				end
				else begin
					block_x <= block_x+1 ;
					block_y <= block_y;
				end
			end
				enter_flag <= 1;  		
  		end
  		cnt <= cnt + 1;
  	end
  	else if(cnt==4'd12) begin
  		if(ascii == 8'h0d) begin
  			block_x <= 0;
  			block_y <= block_y +1;
  		end
  		else begin
			if(block_x==70) begin
				block_x <= 0;
				block_y <=block_y+1;
			end
			else begin
				block_x <= block_x +1;
				block_y <= block_y;
			end
  		end
  	end
  	else begin
		block_x <= block_x;
		block_y <= block_y;
  		cnt <= cnt + 1;
  	end
  	screen_ram[block_y[4:0]][block_x[6:0]]<=ascii;
  end
  else begin
		block_x <= block_x;
		block_y <= block_y;
  		cnt <= 0;  
  end
end
endmodule
