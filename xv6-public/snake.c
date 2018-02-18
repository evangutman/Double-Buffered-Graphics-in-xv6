#include "types.h"
#include "user.h"

int test_draw_pixel(void);
int test_clear_screen(void);
int test_draw_line(void);

int main(void) {
	int k;
	int x = 320;
	int y = 240;
	int color = 4;
	
	init_graphics();
	test_draw_pixel();
	draw_pixel(x, y, color);	//draw pixel in the middle
	blit();
	while(1){
		k = getkey();
		if(k == -1){
			sleep(1);
		} else {
			//printf(1, "%d", k);
			switch (k) {
				case -27:	
					//draw_pixel(x, y, 0);
					//blit();
					x++;
					draw_pixel(x, y, color);
					blit();
					break;
				case -28:	
					//draw_pixel(x, y, 0);
					//blit();
					x--;
					draw_pixel(x, y, color);
					blit();
					break;
				case -29:	
					//draw_pixel(x, y, 0);
					//blit();
					y++;
					draw_pixel(x, y, color);
					blit();
					break;
				case -30:	
					//draw_pixel(x, y, color);
					//blit();
					y--;
					draw_pixel(x, y, color);
					blit();
					break;
			}
		}
	}
	//test_clear_screen();
	//test_draw_line();
	//exit_graphics();
	
	return 0;
}
int test_draw_pixel(void) {
	int i;
	for( i = 0 ; i < 640 ; i++) {
		draw_pixel(i, 50, 4);
		
	}
	return 0;
}

int test_clear_screen(void) {
	int i;
	int j;
	for(i = 0 ; i < 640 ; i++) {
		for( j = 0 ; j < 640 ; j++) {
			draw_pixel(i , j , 1);
		}
	}
	clear_screen();
	return 0;
}
int test_draw_line(void) {
	return 0;
}
