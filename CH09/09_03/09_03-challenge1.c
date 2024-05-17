#include <stdio.h>

int main()
{
	const char filename[] = "hello.txt";
	char name[32];
	char ch;
	FILE *fh;

	// write to file
	fh = fopen(filename, "w");
	if (fh == NULL)
	{
		return (1);
	}

	printf("Enter your name: ");
	fgets(name, 32, stdin);
	for (int i = 0; i < 32; i++)
	{
		if (name[i] == '\n')
		{
			name[i] = '\0';
		}
	}

	fprintf(fh, "%s has been written to this file!\n", name);

	// fputs(name, fh);

	fclose(fh);

	// read whole file
	fh = fopen(filename, "r");
	if (fh == NULL)
	{
		return (1);
	}

	while (1)
	{
		ch = fgetc(fh);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}

	fclose(fh);

	return 0;
}
