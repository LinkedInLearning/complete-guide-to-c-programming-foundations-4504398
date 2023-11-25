#include <stdio.h>
#include <stdlib.h>

int get_value()
{
	char buffer[3];

	fgets(buffer,3,stdin);
	return(atoi(buffer));
}

void newline(void)
{
	putchar('\n');
}

void separator_row(int w, char c)
{
	int x;

	for( x=0; x<w*4; x++ )
		putchar(c);
	newline();
}

int main()
{
	int a,b,c,rows;
	const int columns = 10;

	printf("How many rows (18 max)? ");
	rows = get_value();
	if( rows>18 )
		rows= 18;

	c = 0;
	for( a=0; a<rows; a++ )
	{
		if( a%2 )
		{
			separator_row(columns,'=');
		}
		else
		{
			for( b='A'; b<'A'+columns; b++ )
				printf(" %d%c ",c,b);
			newline();
			c++;
		}
	}

	return 0;
}
