#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *t;
	int x;

	t = title;
	x = 0;
	while( *(t+x) != '\0' )
	{
		putchar(*(t+x));
		x++;
	}

	return 0;
}
