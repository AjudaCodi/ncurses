#include <ncurses.h>

int
main (void)
{
	char ch;
	initscr();
	noecho();
	while (1)
	{
		ch = getch();
		if ('a' == ch) break;
		switch (ch)
		{
		case 'b':
			addch ('l' | A_BOLD | A_UNDERLINE);
			break;
		default:
			addch (ch);
		}
	}
	endwin();
return 0;
}
