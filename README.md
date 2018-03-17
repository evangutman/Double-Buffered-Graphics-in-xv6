# Double-Buffered-Graphics-in-xv6

In this project, I built a graphics driver (graphics.c) for an xv6 operating system. To expose the driver's functionalities, I used the following system calls:
	-sys_init_graphics()
	-sys_exit_graphics()
	-getkey()
	-clear_screen()
	-draw_pixel(int x, int y, int color)
	-int draw_line(int x1, int y1, int x2, int y2, int color)
	-int blit()


To test the functionality of my system calls, I made a snake game (snake.c) which is compiled with the kernel and is runnable from the console with command "snake" 

snake.c TODO:
	1. Dynamically size snake depending on how much food it has eaten
