#include <stdio.h>

void add (int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b)
{
	printf("%d * %d = %d\n", a, b, a * b);
}

float divide(int a, int b)
{
	return (float)a/b;
}

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	add(a,b);
	subtract(a,b);
	multiply(a,b);
	printf("%d / %d = %f\n",a,b,divide(a,b));
	
	return 0;
}
