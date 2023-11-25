#include <stdio.h>

int funct(void)
{
	int a = 0;

	a += 16;
	printf("In funct(), A = %d\n",a);

	return(a);
}

int main()
{
	int a;

	a = funct();
	printf("In main(), A = %d\n",a);
	a = funct();
	printf("In main(), A = %d\n",a);
	a = funct();
	printf("In main(), A = %d\n",a);

	return 0;
}
