#include <stdio.h>

int main()
{
	char a;

	puts("Menu");
	puts("A - Bugs");
	puts("B - Snake Surprise");
	puts("C - Eyeball Soup");
	printf("Your choice: ");
	scanf("%c",&a);

	switch(a)
	{
		case 'A':
			puts("Delicious! A hearty snack.");
			break;
		case 'B':
			puts("A family favorite!");
			break;
		case 'C':
			puts("From a secret recipe.");
			break;
		default:
			puts("Invalid choice");
	}

	return(0);
}

