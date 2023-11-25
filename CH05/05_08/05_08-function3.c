#include <stdio.h>

float average(float a, float b, float c, int count)
{
	float avg;

	avg = ( a + b + c ) / count;

	return(avg);
}

int main()
{
	float a;

	a = average( 29.0, 37.0, 30.2, 3 );
	printf("The average of 29.0, 37.0 and 30.2 is %.2f\n",a);

	return(0);
}

