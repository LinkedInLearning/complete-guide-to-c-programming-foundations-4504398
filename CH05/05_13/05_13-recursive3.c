#include <stdio.h>

void recurse(int v)
{
	int a;

	for(a=0;a<v;a++)
		putchar('-');
	puts("-> Wind-up!");
	if( v == 10 )
		return;
	recurse(v+1);
	for(a=0;a<v;a++)
		putchar('-');
	puts("-< Unwinding");
}

int main()
{
	recurse(0);

	return(0);
}
