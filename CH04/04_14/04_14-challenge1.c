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

	/* output results */
	puts("Game over");

	return 0;
}
