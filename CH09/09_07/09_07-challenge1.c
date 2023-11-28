#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";
	struct person {
		char name[32];
		int inauguration;
		int age;
	} president;
	int x;
	FILE *fp;

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* read records from back to front */

	/* clean-up */
	fclose(fp);
	return(0);
}


