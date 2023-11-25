#include <stdio.h>

int main()
{
	int x;

	for(x=1;x<=10;x++)
	{
		printf("%d - %s\n",x,x % 2 ? "odd" : "even");
	}

	return(0);
}
