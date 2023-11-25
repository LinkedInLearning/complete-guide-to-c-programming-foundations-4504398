#include <stdio.h>
#include <stdlib.h>

int *makearray(int size)
{
	int *p;
	int x;

	/* allocate storage for `size` integers */
	p = malloc( sizeof(int) * size );
	if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	
	/* fill the array */
	for(x=0;x<size;x++)
		*(p+x) = (x+1)*10;

	return(p);
}

int main()
{
	int *i,x;

	i = makearray(5);
	for(x=0;x<5;x++)
		printf("%d\n",*(i+x));

	/* clean-up */
	free(i);
	return(0);
}
