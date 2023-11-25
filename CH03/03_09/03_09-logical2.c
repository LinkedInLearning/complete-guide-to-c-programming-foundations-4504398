#include <stdio.h>

int main()
{
	int a = 1;

	while( a <= 20)
	{
		if( a <= 5 || a >= 16 || a == 10 )
			putchar('*');
		printf("%d\n",a);
		a++;
	}

	return(0);
}
