#include <stdio.h>

int main()
{
	char product[] = "book";
	int q = 2;
	float p = 12.99;

	printf("You have purchased %d %s/s at $%.2f each.\nThe total cost is $%.2f\n",q,product,p,q*p);
	return 0;
}