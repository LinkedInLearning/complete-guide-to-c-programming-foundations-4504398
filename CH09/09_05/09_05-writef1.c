#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int x,a;

	/* open and create the file */
	fp = fopen(filename,"w");
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* write the integers */
	a = 10;
	for(x=0;x<10;x++)
	{
		fwrite(&a, sizeof(int), 1, fp);
		a += 5;
	}

	/* close-up */
	fclose(fp);
	return(0);
}

