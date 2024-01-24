#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float ratio = 0.75;	/* or =3.0/4.0 */
	char a;
	int b;
	float c;

	a = 'A';
	b = 45;
	c = 123.45;

	printf("The value of variable a is '%c'\n",a);
	printf("The value of variable b is %d\n",b);
	printf("The value of variable c is %.2f\n",c);
	printf("The value of constant ratio is %.2f\n",ratio);

	return 0;
}
