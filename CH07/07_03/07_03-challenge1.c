#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (isupper(string[i]))
		{
			putchar(tolower(string[i]));
		}
		else if (islower(string[i]))
		{
			putchar(toupper(string[i]));
		}
		else
		{
			putchar(string[i]);
		}
	}

	return (0);
}
