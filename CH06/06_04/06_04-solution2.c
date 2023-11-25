#include <stdio.h>

int main()
{
	int age[] = { 65, 48, 31, 12, 1 };
	int x;
	
	for( x=0; x<5; x++ )
		printf("I know someone who is %d years old\n",age[x]);

	return 0;
}
