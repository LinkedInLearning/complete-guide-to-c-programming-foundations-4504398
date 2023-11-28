#include <stdio.h>

void add(int x, int y)
{
	printf("%d + %d = %d\n",x,y,x+y);
}

void subtract(int x, int y)
{
	printf("%d - %d = %d\n",x,y,x-y);
}

void multiply(int x, int y)
{
	printf("%d * %d = %d\n",x,y,x*y);
}

float divide(int x, int y)
{
	return((float)x/y);
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
