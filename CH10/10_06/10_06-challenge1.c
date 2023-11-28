#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

/* process input */
char getinput(void)
{
	const int size = 32;
	char input[size];

	fgets(input,size,stdin);
	return(toupper(input[0]));
}

/* check player's status */
void status(int m[], struct player *y)
{
	if( m[y->position]==GOLD )
	{
		puts(" You have found the gold!");
		y->won = TRUE;
		return;
	}
	if( m[y->position]==BEAST )
	{
		puts(" You have met the beast!");
		y->alive = FALSE;
		return;
	}
	if( m[y->position]==PIT )
	{
		puts(" You fall into a bottomless pit!");
		y->alive = FALSE;
		return;
	}
}

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
		/* set the items */
	maze[2] = BEAST;
	maze[6] = PIT;
	maze[8] = PIT;
	maze[10] = GOLD;
	
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
		if( maze[right]==PIT || maze[left]==PIT || maze[back]==PIT )
			puts(" A cold breeze blows from a nearby chamber");
		if( maze[right]==BEAST || maze[left]==BEAST || maze[back]==BEAST )
			puts(" A horrible smell is coming from a nearby chamber");
		if( maze[right]==GOLD || maze[left]==GOLD || maze[back]==GOLD )
			puts(" You see a faint glittering from a nearby chamber");

		/* interactive commands */
		printf("Command: ");
		switch( getinput() )
		{
			case 'R':
				puts(" You enter the right chamber");
				you.position = right;
				status(maze,&you);
				break;
			case 'L':
				puts(" You enter the left chamber");
				you.position = left;
				status(maze,&you);
				break;
			case 'B':
				puts(" You enter the back chamber");
				you.position = back;
				status(maze,&you);
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
	if( you.won==TRUE )
		puts(" You win!");
	if( you.alive == FALSE )
		puts(" You have died!");
	puts("Game over");

	return 0;
}
