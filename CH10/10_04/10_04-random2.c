#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,r;

	for(x=0;x<10;x++)
	{
		r = rand() % 100 + 1;
		printf("%d\n",r);
	}

	return(0);
}
