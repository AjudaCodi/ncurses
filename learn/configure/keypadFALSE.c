#include <ncurses.h>

int
main (void)
{
	initscr();
	keypad(stdscr, FALSE);
//	echo(); /*volem veure que escrivim ;)*/
	while (1)
		if ('a' == getch()) break;
	endwin();
return 0;
}
