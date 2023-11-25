#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";
	char ch;
	int x = 0;

	while( (ch = string[x]) != '\0' )
	{
		if( isupper(ch) )
			putchar('_');
		else
			putchar(ch);
		x++;
	}

	return(0);
}
