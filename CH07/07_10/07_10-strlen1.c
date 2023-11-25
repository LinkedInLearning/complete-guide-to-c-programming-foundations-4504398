#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Hello, you happy planet.";
	int len;

	len = strlen(string);
	printf("The string \"%s\" is %d characters long.\n",string,len);

	return(0);
}

