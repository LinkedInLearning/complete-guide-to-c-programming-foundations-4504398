#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	for( ; a>0 ; a--)
		putchar('-');
	putchar('\n');

	return(0);
}
