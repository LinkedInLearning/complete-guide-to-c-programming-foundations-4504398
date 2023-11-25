#include <stdio.h>

int main()
{
	char buffer[32];

	printf("Type your name: ");
	fgets(buffer,32,stdin);
	printf("Hello, %s",buffer);
	return 0;
}
