#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	char *temp;
	int x;

	/* swap 2 and 3 */
	temp = veeps[1];
	veeps[1] = veeps[2];
	veeps[2] = temp;

	for(x=0;x<5;x++)
		printf("%s\n",*(veeps+x));

	return(0);
}

