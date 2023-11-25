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
	for( x=9; x>=0; x-- )
	{
		fseek(fp, sizeof(struct person)*x, SEEK_SET);
		fread(&president, sizeof(struct person), 1, fp);
		/* print the result */
		printf("President %s was %d years old when inaugurated in %d\n",
				president.name,
				president.age,
				president.inauguration
			  );
	}

	/* clean-up */
	fclose(fp);
	return(0);
}


