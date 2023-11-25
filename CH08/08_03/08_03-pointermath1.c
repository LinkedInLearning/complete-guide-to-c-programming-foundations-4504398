#include <stdio.h>

int main()
{
	int alpha;
	int *pa;

	pa = &alpha;
	printf("%p\n",pa);
	printf("%p\n",pa+1);

	return(0);
}

