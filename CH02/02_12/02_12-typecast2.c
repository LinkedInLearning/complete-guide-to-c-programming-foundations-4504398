#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,r[5];

	srand((unsigned)time(NULL));

	for(x=0;x<5;x++)
		r[x] = rand()%10+1;

	printf("Here are your %d random values:\n",5);
	for(x=0;x<5;x++)
		printf("%3d\n",r[x]);

	return(0);
}

