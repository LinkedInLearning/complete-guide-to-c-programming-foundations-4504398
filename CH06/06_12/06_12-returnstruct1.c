#include <stdio.h>

struct pixel {
	int horz;
	int vert;
	char color;
};

struct pixel screenmid(int h, int v)
{
	struct pixel c;

	c.horz = h/2;
	c.vert = v/2;
	c.color = 'r';

	return(c);
}

int main()
{
	struct pixel midscreen;

	midscreen = screenmid(640,480);
	printf("The center pixel is found at %d,%d\n",
			midscreen.horz,
			midscreen.vert
		  );

	return(0);
}
