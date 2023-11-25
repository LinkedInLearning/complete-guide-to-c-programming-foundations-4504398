#include <stdio.h>

void incshow(char array[])
{
	int x;

	for(x=0;x<6;x++)
	{
		array[x]++;
		putchar(array[x]);
	}
}

int main()
{
	char text[] = "Gdkkn ";

	incshow(text);
	putchar('\n');

	return(0);
}
