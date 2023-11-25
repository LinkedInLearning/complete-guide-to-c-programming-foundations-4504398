#include <stdio.h>

void sum(void);

int main()
{
	puts("Calling the sum() function:");
	sum();
	puts("Done");

	return(0);
}

void sum(void)
{
	int a,b,sum;

	a = 91; b = 7;
	sum = a + b;
	printf("%d + %d = %d\n",a,b,sum);
}

