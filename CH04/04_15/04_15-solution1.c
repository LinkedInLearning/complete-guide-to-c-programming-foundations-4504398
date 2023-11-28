#include <stdio.h>
#include <stdlib.h>

#define ROOMS 12
#define EMPTY 0
#define BEAST 1
#define PIT 2
#define GOLD 3
#define FALSE 0
#define TRUE 1

/* main program */
int main()
{
	int x,done,right,left,back;
			
	/* initialization */
	
	/* initial message */
	puts("Gold Miner");
	printf("You're in a mine with %d chambers.\n",ROOMS);
	puts("Each chamber in the mine has three exits. You can go");
	puts("(L) left, (R) right, or (B) back. If you enter a");
	puts("chamber with the beast, you die! If you enter a chamber");
	puts("with a pit, you die! If you enter the chamber with the");
	puts("gold, you win! The mine has two pits and one beast!");
	puts("Find the gold!\n");

	/* main program loop */
	done = FALSE;
	while(!done)
	{
		/* exit the loop on player victory or death */

		/* obtain movement/direction */

		/* update player */

		/* check adjacent rooms */

		/* interactive commands */
		printf("Command: ");
		switch( getchar() )
		{
			case 'R':
				puts(" You enter the right chamber");
				break;
			case 'L':
				puts(" You enter the left chamber");
				break;
			case 'B':
				puts(" You enter the back chamber");
				break;
			case 'Q':
				done = TRUE;
				puts("Goodbye!");
				break;
			case 'H':
			case '?':
				puts(" You may go (R)ight, (L)eft, or (B)ack");
				puts(" Or you can (Q)uit");
				break;
			case '\n':
				break;
			default:
				puts(" ? I don't know that command");
		}
	}

	/* output results */
	puts("Game over");

	return 0;
}
