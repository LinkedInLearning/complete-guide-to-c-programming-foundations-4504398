#include <stdio.h>

int main()
{
	int text[10];
	int *pt;

	printf("Type something: ");
	scanf("%s",text);
	printf("You typed: %s\n",text);
	pt = text;
	printf("Address of text = %p\n",text);
	printf("Address of pt = %p\n",pt);

	return(0);
}

