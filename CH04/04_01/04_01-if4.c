#include <stdio.h>

int main()
{
	int a = 1;

	while(a <= 20)
	{
		if( a > 6 && a < 15 )
			putchar('*');
		printf("%d\n",a);
		a++;
	}

	return(0);
}
