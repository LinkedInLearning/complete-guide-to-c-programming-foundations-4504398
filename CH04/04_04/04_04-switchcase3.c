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
		case 'a':
			puts("Delicious! A hearty snack.");
			break;
		case 'B':
		case 'b':
			puts("A family favorite!");
			break;
			case 'C':
		case 'c':
			puts("From a secret recipe.");
			break;
		default:
			puts("Invalid choice");
	}

	return(0);
}

