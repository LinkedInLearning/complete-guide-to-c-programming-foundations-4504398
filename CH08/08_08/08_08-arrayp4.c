#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

	for(x=0;x<5;x++)
		printf("%c\n",**(veeps+x));

	return(0);
}

