#include <stdio.h>

int main()
{
	int ch1,ch2;

	printf("Type a character: ");
	ch1 = getchar();
	printf("Type a character: ");
	ch2 = getchar();
	printf("Characters '%c' and '%c' received.\n",ch1,ch2);

	return(0);
}
