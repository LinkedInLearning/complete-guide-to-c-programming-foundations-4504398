#include <stdio.h>

int main()
{
	int twos[5] = { 2, 4, 6, 8, 10 };
	int *pt;

	pt = twos;
	printf("%p\n",pt);
	printf("%p\n",pt+1);

	return(0);
}

