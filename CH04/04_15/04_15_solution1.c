/*
   Dan Gookin
   November 27, 2023
   Code a simulation
*/   
#include <stdio.h>
#include <stdlib.h>

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
		printf("Draw %d\n",x+1);
	
	return 0;
}
