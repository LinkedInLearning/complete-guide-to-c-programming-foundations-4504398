#include <stdio.h>

int main()
{
	int artifacts,rooms,paintings,sculptures;

	rooms = 12;
	paintings = 16;
	sculptures = 4;

	artifacts = rooms * (paintings + sculptures);

	printf("This museum has %d artifacts\n",artifacts);

	return(0);
}
