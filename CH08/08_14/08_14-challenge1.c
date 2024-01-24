#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here

int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);

	return 0;
}
