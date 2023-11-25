#include <stdio.h>

int main()
{
	int a;

	a = 0;
	while(1)
	{
		a++;
		printf("%d\n",a);
		if( a < 10 )
			continue;
		a++;
		if( a > 20 )
			break;
	}

	return(0);
}
