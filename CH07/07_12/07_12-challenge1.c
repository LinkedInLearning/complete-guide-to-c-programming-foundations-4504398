#include <stdio.h>
#include <stdlib.h>

#define ROOMS 12
#define EMPTY 0
#define BEAST 1
#define PIT 2
#define GOLD 3
#define FALSE 0
#define TRUE 1

struct player {
	int position;
	int alive;
	int won;
};

/* main program */
int main()
{
	int maze[ROOMS];
	struct player you;
	int x,done,right,left,back;
			
	/* initialization */
		/* configure the player */
	you.position = 0;
	you.alive = TRUE;
	you.won = FALSE;
		/* empty all the rooms */
	for( x=0; x<ROOMS; x++ )
		maze[x] = EMPTY;
	
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
		if( you.alive==FALSE || you.won==TRUE )
			break;

		/* obtain movement/direction */
		right = (you.position+ROOMS-1)%ROOMS;
		left = (you.position+ROOMS+1)%ROOMS;
		back = (you.position+ROOMS/2)%ROOMS;

		/* update player */
		printf(" You are in chamber %d of the mine\n",
				you.position+1);
		/* check adjacent rooms */

		/* interactive commands */
		printf("Command: ");
		switch( getchar() )
		{
			case 'R':
				puts(" You enter the right chamber");
				you.position = right;
				break;
			case 'L':
				puts(" You enter the left chamber");
				you.position = left;
				break;
			case 'B':
				puts(" You enter the back chamber");
				you.position = back;
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
