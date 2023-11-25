#include <stdio.h>

void show_pixel(struct pixel p)
{
	printf("Pixel found at %d,%d, color = ",
			p.horz,
			p.vert
		  );
	switch(p.color)
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
}

int main()
{
	struct pixel {
		int horz;
		int vert;
		char color;
	} center = { 320, 240, 'r' };

	show_pixel(center);

	return(0);
}
