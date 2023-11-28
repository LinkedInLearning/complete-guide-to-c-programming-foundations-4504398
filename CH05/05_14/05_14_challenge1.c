#include <stdio.h>

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
