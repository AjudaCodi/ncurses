#include <ncurses.h>

int
main (void)
{
	initscr();
	noecho();
	while (1)
		if ('a' == getch()) break;
	endwin();
return 0;
}
