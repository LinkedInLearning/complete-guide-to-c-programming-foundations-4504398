#include <stdio.h>
#include <math.h>

int main()
{
	double a = 4294967296.0;

	while(a >= 2.0)
	{
		printf("%.f\n",a);
		a = sqrt(a);
	}

	return(0);
}

