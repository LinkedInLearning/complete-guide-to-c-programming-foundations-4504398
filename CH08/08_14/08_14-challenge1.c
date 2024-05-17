#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char *get_input(size_t size)
{
	char *input;

	input = malloc(sizeof(char) * size);
	if (input == NULL)
	{
		exit(1);
	}

	fgets(input, size, stdin);

	for (int i = 0; i < size; i++)
	{
		if (*(input + i) == '\n')
		{
			*(input + i) = '\0';
			break;
		}
	}
	return input;
}

int main()
{
	char *your_name, *your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n", your_name, your_city);

	free(your_name);
	free(your_city);
	return 0;
}
