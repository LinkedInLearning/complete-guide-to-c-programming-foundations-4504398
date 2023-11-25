#include <stdio.h>

int main()
{
	FILE *p;
	int c;

	/* open the process */
	p = popen("uname","r");	/* linux */
	if( p == NULL )
	{
		puts("Unable to create process");
		return(1);
	}

	/* read from the process */
	while( (c=fgetc(p)) != EOF )
	{
		putchar(c);
	}

	/* close the process */
	pclose(p);

	return(0);
}

