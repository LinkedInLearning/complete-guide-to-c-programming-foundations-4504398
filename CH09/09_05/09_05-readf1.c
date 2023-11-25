#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int x,a;

	/* open the file for reading */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* read integers */
	for(x=0;x<10;x++)
	{
		fread(&a, sizeof(int), 1, fp );
		printf("%d\n",a);
	}

	/* close */
	fclose(fp);

	return(0);
}

