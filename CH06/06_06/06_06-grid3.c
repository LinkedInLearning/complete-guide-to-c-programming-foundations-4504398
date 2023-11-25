#include <stdio.h>

int main()
{
	char tictactoe[3][3][3];
	int x,y,z;

	/* initialize */
	for(x=0;x<3;x++)
		for(y=0;y<3;y++)
			for(z=0;z<3;z++)
				tictactoe[x][y][z] = '.';

	/* display */
	puts("3D Tic Tac Toe");
	for(x=0;x<3;x++)
	{
		printf("%*c",x+1,' ');		/* The * is a placeholder for the width */
		for(y=0;y<3;y++)
		{
			for(z=0;z<3;z++)
				printf(" %c ",tictactoe[x][y][z]);
			printf("     ");	/* 5 spaces */
		}
		putchar('\n');
	}

	return(0);
}
