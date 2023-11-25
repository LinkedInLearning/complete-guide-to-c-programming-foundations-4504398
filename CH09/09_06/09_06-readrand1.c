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

	/* prompt to read a specific record */
	printf("Enter record to read (1-10): ");
	scanf("%d",&x);
	/* validate the input */
	if( x<1 || x>10 )
	{
		puts("Invalid input");
		return(1);
	}
	/* decrement x to reference the proper offset */
	x--;

	/* Set the file position indicator */
	fseek(fp, sizeof(struct person)*x, SEEK_SET);
	/* fetch the record */
	fread(&president, sizeof(struct person), 1, fp);

	/* print the result */
	printf("President %s was %d years old when inaugurated in %d\n",
			president.name,
			president.age,
			president.inauguration
		  );

	/* close-up */
	fclose(fp);
	return(0);
}


