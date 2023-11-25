#include <stdio.h>

int main()
{
	char input[10];

	printf("Your name? ");
	scanf("%s",input);
	printf("Pleased to meet you, %s!\n",input);

	return(0);
}

