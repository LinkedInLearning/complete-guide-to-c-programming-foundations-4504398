#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[16];
	int lv;

	printf("Type a large value: ");
	fgets(buffer,16,stdin);
	lv = strtol(buffer,NULL,10);
	printf("You typed %d\n",lv);
	return 0;
}
