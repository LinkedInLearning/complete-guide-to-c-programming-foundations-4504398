#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

// sort a SIZE x SIZE grid
int main()
{
	int *elements;

	// seed the randomizer
	srand((unsigned)time(NULL));

	// allocate storage
	elements = malloc(sizeof(int) * SIZE * SIZE);
	
	// populate the grid with random values, 0 through 99
	for (int i = 0; i < (SIZE * SIZE); i++)
	{
		*(elements + i) = rand() % 100;
	}
	
	// quicksort the grid
	qsort(elements, SIZE * SIZE, sizeof(int), compare);

	// output the grid
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%2d ", *(elements + i + j*SIZE));
			if (j == SIZE - 1)
			{
				putchar('\n');
			}
		}
	}

	return 0;
}
