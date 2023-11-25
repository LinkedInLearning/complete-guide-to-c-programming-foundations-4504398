#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;
	double d;
	char string[] = "Hello!";
	int buffer[10];

	printf("char variable 'a' uses %lu bytes\n",sizeof(a));
	printf("int variable 'b' uses %lu bytes\n",sizeof(b));
	printf("float variable 'c' uses %lu bytes\n",sizeof(c));
	printf("double variable 'd' uses %lu bytes\n",sizeof(d));
	printf("string array 'string' uses %lu bytes\n",sizeof(string));
	printf("int buffer 'buffer' uses %lu bytes\n",sizeof(buffer));

	return(0);
}
