#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
	FILE *fh;

	/* open/create the file */
	fh = fopen(f,"w");
	if( fh==NULL )
	{
		printf("Unable to create '%s'\n",f);
		exit(1);
	}
	printf("File '%s' created\n",f);

	/* write your name to the file */
	fprintf(fh,"Dan Gookin");
	puts("Data written");

	/* close the file */
	fclose(fh);
	printf("File '%s' closed\n",f);
}

void read_file(const char *f)
{
	FILE *fh;
	char buffer[32];

	/* open/read the file */
	fh = fopen(f,"r");
	if( fh==NULL )
	{
		printf("Unable to open '%s'\n",f);
		exit(1);
	}
	printf("File '%s' opened\n",f);

	/* read your name from the file */
	fgets(buffer,32,fh);
	printf("The file '%s' contains the text: %s\n",
			f,
			buffer
		  );

	/* close the file */
	fclose(fh);
	printf("File '%s' closed\n",f);
}

void delete_file(const char *f)
{
	int r;

	r = unlink(f);
	if( r==0 )
		printf("File '%s' deleted\n",f);
	else
		puts("Something went wrong!");
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
