#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* main program */
int main()
{
	// variable declaration
	char input[32];

	while (1)
	{
		printf("Command: ");
		// fetch input
		fgets(input, 32, stdin);
		// remove newline
		// convert to uppercase
		for (int i = 0; i < 32; i++)
		{
			if (input[i] == '\n')
			{
				input[i] = '\0';
			}
			input[i] = toupper(input[i]);
		}

		// output "Processing command 'cmd'"
		// break the loop on `QUIT`
		if (strcmp(input, "QUIT"))
		{
			printf("Processing command '%s'\n", input);
		}
		else
		{
			printf("Processing command 'QUIT'\n");
			break;
		}
	}

	return 0;
}
