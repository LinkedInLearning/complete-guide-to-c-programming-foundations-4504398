#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	int done,ch;
			
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		printf("Command: ");
		ch = getchar();
		switch( ch )
		{
			case 'R':
			case 'r':
				puts("Move right");
				break;
			case 'L':
			case 'l':
				puts("Move left");
				break;
			case 'B':
			case 'b':
				puts("Move back");
				break;
			case 'Q':
			case 'q':
				done = TRUE;
				puts("Goodbye!");
				break;
			case 'H':
			case 'h':
			case '?':
				puts("You may go (R)ight, (L)eft, or (B)ack");
				puts("Or you can (Q)uit");
				break;
			default:
				puts("I don't know that command");
		}
		while( (ch=getchar()) !='\n' )
			;
	}

	return 0;
}
