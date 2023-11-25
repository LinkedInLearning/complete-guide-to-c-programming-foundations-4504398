#include <stdio.h>

int main()
{
	int alpha;

	alpha = 27;
	printf("Integer variable `alpha` holds the value %d\n",alpha);
	printf("Variable `alpha` occupies %lu bytes of storage\n",sizeof(alpha));
	printf("And it sits at address %p\n",&alpha);

	return(0);
}

