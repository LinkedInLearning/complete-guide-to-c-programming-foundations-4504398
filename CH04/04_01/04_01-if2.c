#include <stdio.h>

int main()
{
	int a;

	printf("Type a value: ");
	scanf("%d",&a);
	if( a < 10 )
	{
		puts("You typed a value less than 10");
		a -= 5;
		printf("The value is now %d\n",a);
	}
	puts("Thank you");

	return(0);
}
