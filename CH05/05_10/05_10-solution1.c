#include <stdio.h>

void line(int length, char c)
{
	for( ; length>0; length--)
		putchar(c);
	putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
