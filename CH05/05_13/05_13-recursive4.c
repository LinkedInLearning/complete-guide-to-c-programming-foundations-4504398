#include <stdio.h>

int factorial(int f)
{
	if( f == 1 )
		return(f);
	return( f * factorial( f-1 ) );
}

int main()
{
	int a,b;

	printf("Enter a positive value: ");
	scanf("%d",&a);
	if( a < 1 )
	{
		printf("%d is not a positive value\n",a);
		return(1);
	}
	b = factorial(a);
	printf("The factorial of %d! is %d\n",a,b);

	return(0);
}
