#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
	char name[] = "Renzo Quispe";
	FILE *fh;

	fh = fopen(f, "w");
	if (fh == NULL)
	{
		exit(1);
	}
	puts("Opened file!");

	fputs(name, fh);
	puts("Name written to file!");

	fclose(fh);
	puts("Closed file!");
}

void read_file(const char *f)
{
	char buffer[32];
	FILE *fh;

	fh = fopen(f, "r");
	if (fh == NULL)
	{
		exit(1);
	}
	puts("Opened file!");

	fgets(buffer, 32, fh);
	printf("File first line: %s\n", buffer);

	fclose(fh);
	puts("Closed file!");
}

void delete_file(const char *f)
{
	unlink(f) ? puts("Error!\n") : puts("Deleted!\n");
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
