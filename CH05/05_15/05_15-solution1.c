/*
   Dan Gookin
   November 27, 2023
   Code a simulation
*/   
#include <stdio.h>
#include <stdlib.h>

int ball(int n)
{
	int r;

	r = rand() % n;
	r += 1;

	return(r);
}

/* simulation */
int main()
{
	int draws,x;

	/* starting point */
	printf("Enter the number of draws (18 max): ");
	/* grab an integer */
	scanf("%d",&draws);
	/* avoid out-of-range values */
	if( draws>18 )
		draws = 18;

	/* output the result */
	printf("I will process %d draws\n",draws);
	for( x=0; x<draws; x++ )
		printf("Draw %d, value %d\n",x+1,ball(52));
	
	return 0;
}
