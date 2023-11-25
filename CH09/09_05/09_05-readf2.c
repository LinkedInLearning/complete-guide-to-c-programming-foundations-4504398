#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int x,a[10];

	/* open the file for reading */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* read integers */
	fread(a, sizeof(int), 10, fp );
	for(x=0;x<10;x++)
		printf("%d\n",a[x]);

	/* close */
	fclose(fp);

	return(0);
}

