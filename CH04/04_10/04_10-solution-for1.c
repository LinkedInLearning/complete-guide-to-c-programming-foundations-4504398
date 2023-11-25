#include <stdio.h>

int main()
{
	int a,b;

	printf("How long is the line? ");
	scanf("%d",&a);

	for(b=0 ; b<a ; b++)
		putchar('-');
	putchar('\n');

	return(0);
}
