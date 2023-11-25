#include <stdio.h>

int main()
{
	char string[] = "Greetings, human!\n";
	int index;

	index = 0;
	while( string[index] != '\0' )
	{
		putchar( string[index] );
		index++;
	}

	return(0);
}
