#include <stdio.h>

void incshow(char a)
{
	a++;
	putchar(a);
}

int main()
{
	char text[] = "Gdkkn ";
	int x;

	for(x=0;x<6;x++)
		incshow(text[x]);
	putchar('\n');

	return(0);
}
