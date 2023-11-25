#include <stdio.h>

int main()
{
	int a = 1000000;

	while(a > 0)
	{
		printf("%d\n",a);
		a = a >> 1;
	}

	return(0);
}
