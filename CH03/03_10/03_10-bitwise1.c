#include <stdio.h>

/* convert an integer into a string of 1s and 0s */
char *binString(unsigned short n)
{
	static char bin[17];
	int x;

	for(x=0;x<16;x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[16] = '\0';

	return(bin);
}

int main()
{
	unsigned short a,b,c;

	a = 0xAAAA;
	b = 0x00FF;

	printf("Start: %04X - %s\n",a,binString(a));
	printf("     & %04X - %s\n",b,binString(b));
	c = a & b;
	printf("  End: %04X - %s\n",c,binString(c));

	return 0;
}
