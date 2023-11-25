#include <stdio.h>

int main()
{
	char a;

	printf("Type a single character: ");
	scanf("%c",&a);

	printf("You typed \"%c\", which is code %d\n",
			a,
			a
		  );
	return 0;
}
