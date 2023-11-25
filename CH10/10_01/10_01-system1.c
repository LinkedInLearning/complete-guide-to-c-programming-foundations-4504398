#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Press Enter to clear the screen: ");
	getchar();
	system("clear");	/* linux */
	puts("Thank you");

	return(0);
}
