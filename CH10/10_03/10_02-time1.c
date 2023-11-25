#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;

	time(&now);
	printf("It's now %ld\n",now);

	return(0);
}

