#include <stdio.h>

int main()
{
	int alpha;
	int *ptr;

	alpha = 99;
	ptr = &alpha;
	printf("The address of variable alpha is %p\n",&alpha);
	printf("The value stored in pointer ptr is %p\n",ptr);
	printf("The content of variable alpha is %d\n",alpha);
	printf("The content of memory address %p is %d\n",ptr,*ptr);

	return(0);
}
