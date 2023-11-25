#include <stdio.h>

int main()
{
	int a;

	printf("Type a value: ");
	scanf("%d",&a);
	if( a < 10 )
	{
		puts("You typed a value less than 10");
	}
	puts("Thank you");

	return(0);
}
