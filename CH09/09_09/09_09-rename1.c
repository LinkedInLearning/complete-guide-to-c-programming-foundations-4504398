#include <stdio.h>

int main()
{
	int r;

	r = rename("alpha.txt","a.txt");
	if( r == 0 )
		puts("Rename operation successful");
	else
		puts("Rename failed");

	return(0);
}

