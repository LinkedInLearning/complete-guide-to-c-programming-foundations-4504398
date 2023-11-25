#include <stdio.h>

void recurse(int a)
{
	a++;
	if( a>10 )
		return;
	printf("%d\n",a);
	recurse(a);
}

int main()
{
	recurse(0);

	return 0;
}
