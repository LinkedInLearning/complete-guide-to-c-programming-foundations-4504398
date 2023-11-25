#include <stdio.h>

void recurse(int a)
{
	a++;
	printf("%d\n",a);
	recurse(a);
}

int main()
{
	recurse(0);

	return 0;
}
