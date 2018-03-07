#include "types.h"
#include "user.h"

int test_draw_line(void);

int main(void) {
	int k;
	int x = 320;
	int y = 240;
	int color = 4;
	
	init_graphics();
	//test_draw_line();
	draw_pixel(x, y, color);	//draw pixel in the middle
	blit();
	while(1){
		k = getkey();
		if(k == -1){
			sleep(1);
		} else {
			switch (k) {
				case -27:	
					clear_screen();
					x++;
					draw_pixel(x, y, color);
					blit();
					break;
				case -28:	
					clear_screen();
					x--;
					draw_pixel(x, y, color);
					blit();
					break;
				case -29:	
					clear_screen();
					y++;
					draw_pixel(x, y, color);
					blit();
					break;
				case -30:	
					clear_screen();
					y--;
					draw_pixel(x, y, color);
					blit();
					break;
			}
		}
	}
	exit_graphics();
	
	return 0;
}


//Method to test the functionality of my draw_line system call
int test_draw_line(void) {
	draw_line(0, 0, 34, 60, 6);
	draw_line(50, 0, 50, 50, 8);
	return 0;
}
