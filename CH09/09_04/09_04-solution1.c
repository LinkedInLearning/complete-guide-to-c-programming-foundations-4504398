#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "hello.txt";
	char name[16];
	char input[64];
	FILE *fh;

	/* create the file */
	fh = fopen(filename,"w");
	if( fh==NULL )
	{
		puts("Error creating file");
		exit(1);
	}

	/* prompt for input */
	printf("Your name: ");
	scanf("%s",name);

	/* write to the file */
	fprintf(fh,"%s has written to this file\n",name);

	/* close */
	fclose(fh);

	/* open and read the file */
	fh = fopen(filename,"r");
	if( fh==NULL )
	{
		puts("Error opening file");
		exit(1);
	}

	/* read the text */
	fgets(input,128,fh);
	printf("The file '%s' contains this text:\n",filename);
	puts(input);

	/* clean-up */
	fclose(fh);
	return 0;
}
