#include <stdio.h>

#define MAX 20

/* generate a line */
void line(int v)
{
	int x;

	for( x=0; x<v; x++ )
	{
		if( x >= MAX )
			break;
		putchar('-');
	}
	putchar('\n');
}

int main()
{
	int value;

	printf("Enter a positive value less than %d: ",MAX);
	scanf("%d",&value);
	line(value);
	return(0);
}
