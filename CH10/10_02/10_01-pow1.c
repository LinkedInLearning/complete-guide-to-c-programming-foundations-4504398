#include <stdio.h>
#include <math.h>

int main()
{
	double a;

	for(a=0.0;a<20.0;a+=1.0)
		printf("%.0f\n",pow(2.0,a) );

	return(0);
}
