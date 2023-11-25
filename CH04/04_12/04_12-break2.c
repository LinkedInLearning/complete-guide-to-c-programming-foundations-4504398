#include <stdio.h>

int main()
{
	int row;
	char column;

	for(row=1;row<=10;row++)
	{
		for(column='A';column<='J';column++)
		{
			printf("%2d%c   ",row,column);
			if(column=='E')
				break;
		}
		putchar('\n');
	}

	return(0);
}
