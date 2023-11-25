#include <stdio.h>

int main()
{
	int age[5];
	int x;
	
	age[0] = 65;
	age[1] = 48;
	age[2] = 31;
	age[3] = 12;
	age[4] = 1;

	for( x=0; x<5; x++ )
		printf("I know someone who is %d years old\n",age[x]);

	return 0;
}
