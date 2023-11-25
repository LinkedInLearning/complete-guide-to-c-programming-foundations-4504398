#include <stdio.h>

int main()
{
	char greetings[4] = { 'H', 'i', '\x21', '\0' };

	puts(greetings);
	return 0;
}
