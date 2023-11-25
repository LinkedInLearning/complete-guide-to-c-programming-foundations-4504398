#include <stdio.h>

int a,b;

void sum(void)
{
	extern int a,b;

	a = 91; b = 7;
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	extern int a,b;

	puts("Calling the sum() function:");
	sum();
	puts("And in main():");
	printf("%d + %d = %d\n",a,b,a+b);

	return(0);
}
