#include <stdio.h>

int main()
{
	int a,b;

	printf("Type a positive value: ");
	scanf("%d",&b);
	for(a=0;a<b;a++)
	{
		printf("I must do this %d times\n",b);
		if(a==9)
			break;
	}

	return(0);
}

