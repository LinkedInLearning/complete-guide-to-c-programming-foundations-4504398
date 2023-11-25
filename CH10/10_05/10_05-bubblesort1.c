#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
	int list[SIZE];
	int a,b,temp;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* build and display the random values */
	printf("%d random values, unsorted:\n",SIZE);
	for(a=0;a<SIZE;a++)
	{
		list[a] = rand() % 100 + 1;	/* values from 1 to 100 */
		printf("%4d",list[a]);
	}
	putchar('\n');

	/* perform the bubble sort */
	for(a=0;a<SIZE-1;a++)
	{
		for(b=a+1;b<SIZE;b++)
		{
			/* if a > b, swap the values */
			if( list[a] > list[b] )
			{
				temp = list[a];
				list[a] = list[b];
				list[b] = temp;
			}
		}
	}

	/* display the sorted list */
	printf("%d random values, sorted:\n",SIZE);
	for(a=0;a<SIZE;a++)
		printf("%4d",list[a]);
	putchar('\n');

	return(0);
}

