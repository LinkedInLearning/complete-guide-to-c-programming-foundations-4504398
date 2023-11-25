#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r,dice1,dice2,dice3;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );
	
	puts("Roll them bones!");
	r = rand() % 6;
	r += 1;
	dice1 = r;
	r = rand() % 6;
	r += 1;
	dice2 = r;
	r = rand() % 6;
	r += 1;
	dice3 = r;
	printf("You rolled %d - %d - %d\n",dice1,dice2,dice3);

	return(0);
}
