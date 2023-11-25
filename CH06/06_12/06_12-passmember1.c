#include <stdio.h>

char *show_color(char c)
{
	switch(c)
	{
		case 'r':
			return("red");
		case 'g':
			return("green");
		case 'b':
			return("blue");
		default:
			return("Invalid");
	}
}

int main()
{
	struct pixel {
		int horz;
		int vert;
		char color;
	} center = { 320, 240, 'r' };

	printf("The pixel at %d,%d is colored %s\n",
			center.horz,
			center.vert,
			show_color(center.color)
		  );

	return(0);
}
