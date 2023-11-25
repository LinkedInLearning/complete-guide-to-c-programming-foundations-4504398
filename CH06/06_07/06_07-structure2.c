#include <stdio.h>

int main()
{
	struct pixel {
		int horz;
		int vert;
		char color;
	} center;

	center.horz = 320;
	center.vert = 240;
	center.color = 'r';

	printf("The pixel at %d,%d is colored ",
			center.horz,
			center.vert
		  );
	switch(center.color)
	{
		case 'r':
			puts("red");
			break;
		case 'g':
			puts("green");
			break;
		case 'b':
			puts("blue");
			break;
		default:
			puts("Invalid");
	}

	return(0);
}

