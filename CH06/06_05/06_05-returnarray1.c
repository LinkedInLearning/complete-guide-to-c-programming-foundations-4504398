#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int makearray(void)
{
	int array[5];
	int x;

	for(x=0;x<5;x++)
		array[x] = rand() % 10 + 1;

	return(array);
}

int main()
{
	int x,r[5];

	srand( (unsigned)time(NULL) );
	puts("Here are your 5 random numbers:");
	r = makearray();
	for(x=0;x<5;x++)
		printf("%d\n",r[x]);

	return(0);
}


	
