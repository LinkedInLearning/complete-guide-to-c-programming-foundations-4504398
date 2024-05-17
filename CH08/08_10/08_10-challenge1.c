#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct unit
	{
		int number;
		char letter;
	} *strucArray[26];

	for (int i = 0, j = 'A'; i < 26; i++, j++)
	{
		strucArray[i] = malloc(sizeof(struct unit));
		if (strucArray[i] == NULL)
		{
			exit(1);
		}
		strucArray[i]->number = i;
		strucArray[i]->letter = j;

		printf("%d%c ", strucArray[i]->number, strucArray[i]->letter);
	}

	for (int i = 0; i < 26; i++)
	{
		free(strucArray[i]);
	}

	return 0;
}
