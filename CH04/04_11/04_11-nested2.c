#include <stdio.h>

int main()
{
	int row;
	char column;

	row = 1;
	while(row<=10)
	{
		column = 'A';
		while(column<='J')
		{
			printf("%2d%c   ",row,column);
			column++;
		}
		putchar('\n');
		row++;
	}

	return(0);
}
