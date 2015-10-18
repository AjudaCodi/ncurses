#include <ncurses.h>

int
main (void)
{
	initscr();
	cbreak();
	while (1)
		if (getch() == 'a') break;
	endwin();
return 0;
}
