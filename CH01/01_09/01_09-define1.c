#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

int main()
{
	int a;

	srand( (unsigned)time(NULL) );
	for(a=0;a<COUNT;a++)
		printf("%3d ",rand()%100+1);
	putchar('\n');

	return 0;
}
