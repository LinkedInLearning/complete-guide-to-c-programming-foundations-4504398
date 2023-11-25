#include <stdio.h>

int main()
{
	struct pixel {
		int horz;
		int vert;
		char color;
	} box[4] = {
		{ 100,  50, 'r' },
		{ 200,  50, 'r' },
		{ 100, 100, 'r' },
		{ 200, 100, 'r' }
	};
	int x;

	for(x=0;x<4;x++)
	{
		printf("Pixel %d: %d, %d =  %c\n",
				x+1,
				box[x].horz,
				box[x].vert,
				box[x].color
			  );
	}

	return(0);
}
