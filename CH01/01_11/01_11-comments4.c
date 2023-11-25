#include <stdio.h>

int main()
{
	int a,b;

	/* this code features a nested loop
	   /* but this nested comment isn't good */
	*/
	for( a=0; a<10; a++ )
	{
		for( b='A'; b<='J'; b++ )
			printf("%d%c  ",a,b);
		putchar('\n');
	}

	return(0);
}

