#include <stdio.h>

int main()
{
	char letters[5] = { 'a', 'b', 'c', 'd', 'e' };
	char *pt;

	pt = letters;
	printf("%p\n",pt);
	printf("%p\n",pt+1);

	return(0);
}

