#include <stdio.h>

int main()
{
	char string[] = "I'm such a handsome program!\n";
	int a;

	a = 0;
	while( putchar(string[a]) != '\0' )
	{
		a++;
	}

	return(0);
}

