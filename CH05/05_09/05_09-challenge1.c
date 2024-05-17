#include <stdio.h>

void line(int n, char c)
{
	for (; n>0; n--)
	{
		putchar(c);
	}
	putchar('\n');
}


int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
