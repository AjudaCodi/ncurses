#include <ncurses.h>

int
main (void)
{
	initscr();
	echo();
	while (1)
		if ('a' == getch()) break;
	endwin();
return 0;
}
