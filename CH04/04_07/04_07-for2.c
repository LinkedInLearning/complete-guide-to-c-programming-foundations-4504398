#include <stdio.h>

int main()
{
	int a,b;

	printf("Type a positive value: ");
	scanf("%d",&b);
	for( a=0 ; a<b ; a++ )
		printf("Countdown: %d\n",b-a);

	return(0);
}

