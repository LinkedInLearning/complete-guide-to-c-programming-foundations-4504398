#include <stdio.h>

int main()
{
	int ch;

	printf("Type '!' to exit: ");
	while(1)
	{
		ch = getchar();
		if( ch=='!' )
			break;
	}

	return(0);
}
