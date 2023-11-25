#include <stdio.h>

int main()
{
	const char filename[] = "sonnet18.txt";
	FILE *fh;

	/* open the file */
	fh = fopen(filename,"r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	printf("File '%s' opened\n",filename);

	/* clean-up */
	fclose(fh);
	return(0);
}
