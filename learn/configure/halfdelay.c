#include <ncurses.h>

int
main (void)
{
	initscr();
	halfdelay(10);
	while (1)
	{
		if (getch() == 'a') break;
		printw ("|");
	}
	endwin();
return 0;
}
