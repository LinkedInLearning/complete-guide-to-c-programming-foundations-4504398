#include <stdio.h>

int main()
{
	int a;

	for(a=0;a<20;a++)
	{
		if( a<10 )
			putchar('*');
		printf("%d\n",a);
	}

	return(0);
}
