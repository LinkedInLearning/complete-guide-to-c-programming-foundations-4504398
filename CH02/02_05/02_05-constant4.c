#include <stdio.h>

int main()
{
	const int count = 4;

	printf("Please count to %d\n",count);
	printf("Do not count to %d\n",count+1);
	printf("Do not stop at %d\n",count-1);

	return(0);
}

