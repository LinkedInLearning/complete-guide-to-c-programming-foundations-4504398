#include <stdio.h>

int main()
{
	int a = 1;

	while(a < 33000)
	{
		printf("%d\n",a);
		a = a << 1;
	}

	return(0);
}
