#include <stdio.h>

void repeat(int r)
{
	int a;

	for( a=0; a<r; a++ )
		putchar('-');
	putchar('\n');
}

int main()
{
	printf("40 dashes:\n");
	repeat(40);
	return 0;
}
