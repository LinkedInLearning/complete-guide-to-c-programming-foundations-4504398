#include <stdio.h>

void funct(void)
{
	int a = 16;

	printf("In funct(), A = %d\n",a);
}

int main()
{
	int a = 10;

	printf("In main(), A = %d\n",a);
	funct();
	printf("In main(), A = %d\n",a);

	return 0;
}
