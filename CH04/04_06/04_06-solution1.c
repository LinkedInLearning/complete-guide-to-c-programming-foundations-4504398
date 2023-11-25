#include <stdio.h>

int main()
{
	int a;

	printf("Select item 1, 2, or 3: ");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			puts("This is the first item");
			break;
		case 2:
			puts("This is the second item");
			break;
		case 3:
			puts("This is the third item");
			break;
		default:
			puts("Invalid choice!");
	}
	return 0;
}
