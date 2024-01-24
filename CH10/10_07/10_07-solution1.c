#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b)
{
	return( *(int *)a - *(int *)b);
}

int main()
{
	const int grow = 5;
	const int gcol = 5;
	const int gsize = grow * gcol;
	int *grid,x,y;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* allocate storage */
	grid = malloc( sizeof(int) * gsize );
	if( grid==NULL )
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	/* populate the grid with random values, 0 through 99 */
	for( x=0; x<gsize; x++ )
		*(grid+x) = rand() % 100;

	/* quicksort the grid */
	qsort(grid,gsize,sizeof(int),compare);

	/* output the grid */
	for( x=0; x<grow; x++ )
	{
		for( y=0; y<gcol; y++ )
		{
			printf(" %2d ",*(grid+grow*y+x) );
		}
		putchar('\n');
	}

	return 0;
}
