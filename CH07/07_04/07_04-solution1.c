#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";
	int ch;
	int x = 0;

	while( (ch = string[x]) != '\0' )
	{
		if( isupper(ch) )
			putchar( tolower(ch) );
		else if( islower(ch) )
			putchar( toupper(ch) );
		else
			putchar(ch);
		x++;
	}

	return(0);
}
