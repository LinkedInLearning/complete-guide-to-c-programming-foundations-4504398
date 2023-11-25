#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *t;

	t = title;
	while( *t != '\0' )
	{
		putchar(*t);
		t++;
	}

	return 0;
}
