#include <stdio.h>

int total(int a, int b, int c, int d, int e)
{
	return a+b+c+d+e;
}

char *title(void)
{
	return("Here is the total:");
}

int main()
{
	printf("%s %d\n",
			title(),
			total(1,2,3,4,5)
		  );
	return 0;
}
