#include <stdio.h>

int main()
{
	int a;

	printf("Select item 1, 2, or 3: ");
	scanf("%d",&a);

	if( a == 1 )
		puts("This is the first item");
	else if( a == 2 )
		puts("This is the second item");
	else if( a == 3)
		puts("This is the third item");
	else
		puts("Invalid choice!");

	return(0);
}
