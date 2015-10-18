#include <ncurses.h>

int
main (void)
{
	initscr();
	raw();
	while (1)
		if ('a' == getch()) break;
	endwin();
return 0;
}
