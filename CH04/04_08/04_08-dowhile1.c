#include <stdio.h>

int main()
{
	int a;

	printf("Enter a value: ");
	scanf("%d",&a);

	do
	{
		puts("Here we go!");
		a--;
	}
	while(a > 0);

	return(0);
}

