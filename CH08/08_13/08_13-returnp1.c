#include <stdio.h>
#include <stdlib.h>

char *allocate(int size)
{
	char *p;

	p = malloc(sizeof(char) * size);
	if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	return(p);
}

int main()
{
	char *a,*b;

	printf("Allocating 256 bytes: ");
	a = allocate(256);
	puts("Done");
	printf("Allocating 512 bytes: ");
	b = allocate(512);
	puts("Done");

	/* clean-up */
	free(a);
	free(b);
	return(0);
}
