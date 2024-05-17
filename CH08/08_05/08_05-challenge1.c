#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *ptr = title;

	for (int i = 0; title[i] != '\0'; i++)
	{
		printf("%c",*(ptr+i));
	}
	

	return 0;
}
