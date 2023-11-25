#include <stdio.h>

int main()
{
	char a;

	printf("Type a character: ");
	scanf("%c",&a);
	if( a >= 'a' && a <= 'z' )
		puts("You typed a lowercase letter");
	else if( a >= 'A' && a <= 'Z' )
		puts("You typed an uppercase letter");
	else if( a >= '0' && a <= '9' )
		puts("You typed a number");
	else if( a == ' ' )
		puts("You typed a space");
	else
		printf("You typed the %c symbol\n",a);

	return(0);
}
