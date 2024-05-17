#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	int done;
	char input;
	/* main program loop */
	done = FALSE;
	while (!done)
	{
		// prompt for SINGLE CHARACTER input
		input = getchar();
		// process input, get rid of \n
		getchar();
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input
		switch (input)
		{
		case 'R':
			puts("move right");
			break;
		case 'L':
			puts("move left");
			break;
		case 'B':
			puts("move back");
			break;
		case 'Q':
			done = TRUE;
			puts("Exit!");
			break;
		case 'H':
		case '?':
			puts("R to move right");
			puts("L to move left");
			puts("B to move back");
			puts("Q to quit");
			puts("H or ? for help");
			break;
		default:
			puts("invalid input!");
		}
	}

	return 0;
}
