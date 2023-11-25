#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(void)
{
	char r;

	r = rand() % 26;
	r += 'A';
	
	return(r);
}

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

