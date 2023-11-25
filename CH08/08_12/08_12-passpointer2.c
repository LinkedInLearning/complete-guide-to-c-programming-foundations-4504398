#include <stdio.h>

void three(float a, float *b, float *c)
{
	*b = a/3.0;
	*c = a/7.0;
}

int main()
{
	float x,y;

	three(20.0,&x,&y);
	printf("20 / 3 = %.1f\n",x);
	printf("20 / 7 = %.1f\n",y);

	return(0);
}
