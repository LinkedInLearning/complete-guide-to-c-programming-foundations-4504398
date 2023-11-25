#include <stdio.h>

int main()
{
	int mod,x,a;

	printf("Enter a value from 2 to 10: ");
	scanf("%d",&mod);
	for(x=1;x<=10;x++)
	{
		a = x % mod;
		printf("%2d %% %d = %d\n",x,mod,a);
	}

	return(0);
}
