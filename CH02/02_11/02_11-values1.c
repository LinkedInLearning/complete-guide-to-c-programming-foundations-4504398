#include <stdio.h>

int main()
{
	int mega = 1000000;				/* no commas! */
	float quarter = 0.25;			/* leading zero */
	double large = 1000000000.0;	/* trailing zero */

	printf("Here are the values:\n");
	printf("Mega - %d\n",mega);
	printf("Quarter - %f\n",quarter);
	printf("Large = %f\n",large);
	return 0;
}
