#include <stdio.h>

int main()
{
	int a,b;

	a = 10;
	b = a;

	printf("a is %d, b is %d\n",a,b);
	a++;
	b--;
	printf("a is %d, b is %d\n",a,b);

	return(0);
}
