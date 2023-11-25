#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *buffer;
	int x;

	/* allocate storage for 20 integers */
	buffer = malloc( sizeof(int) * 20 );
	if( buffer == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	/* fill and display the buffer */
	for(x=0;x<20;x++)
	{
		*(buffer+x) = 10 * (x + 1);
		printf("%d\n",*(buffer+x));
	}

	/* exit */
	free(buffer);
	return(0);
}
