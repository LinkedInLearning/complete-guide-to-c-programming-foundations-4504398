#include <stdio.h>

int main()
{
	FILE *fh;

	/* open the file for appending */
	fh = fopen("alphabet.txt","a");
	if( fh == NULL )
	{
		puts("Failed to open file");
		return(1);
	}

	/* output */
	fputc('\n',fh);

	/* close the file */
	fclose(fh);

	return(0);
}
