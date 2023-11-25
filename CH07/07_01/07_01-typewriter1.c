#include <stdio.h>

int main()
{
	int a;

	while(1)
	{
		a = getchar();
		if(a == EOF)
			break;
		putchar(a);
	};

	return(0);
}

