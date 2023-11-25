#include <stdio.h>
/* The math header file contains definitions for M_PI
   and the sin() function. It does not contain the
   code for the sin() function. The code lies in the
   math library file */
#include <math.h>

int main()
{
	int w;
	for( w=0; w<10; w++)
	{
		printf("%.2f\n",sin(M_PI/(w+1)) );
	}
	return 0;
}
