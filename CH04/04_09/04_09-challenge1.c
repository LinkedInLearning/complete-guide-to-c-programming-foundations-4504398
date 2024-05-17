#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/*
	for (; a > 0; a--)
	{
		putchar('-');
	}
	*/

	while (a>0)
	{
		putchar('-');
		a--;
	}

	putchar('\n');

	return(0);
}
