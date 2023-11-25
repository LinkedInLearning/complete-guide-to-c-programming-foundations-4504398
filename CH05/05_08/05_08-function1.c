#include <stdio.h>

void repeat(int count)
{
	int x;

	for(x=0;x<count;x++)
		printf("Blah ");
	putchar('\n');
}

int main()
{
	printf("Chris said: ");
	repeat(1);
	printf("Pat said: ");
	repeat(3);

	return(0);
}
