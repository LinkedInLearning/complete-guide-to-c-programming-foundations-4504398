#include <stdio.h>

int main()
{
	char input[10];
	int i;

	printf("Your name? ");
	fgets(input,10,stdin);
	for(i=0;i<10;i++)
	{
		if(input[i] == '\n')
			input[i] = '\0';
	}
	printf("Pleased to meet you, %s!\n",input);

	return(0);
}

