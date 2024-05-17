#include <stdio.h>

int main()
{
	int a, b;

	printf("Enter two values, separated by a space: ");
	scanf("%d", &a);
	scanf("%d", &b);

	// add
	printf("a + b = %d\n", a + b);
	// subtract
	printf("a - b = %d\n", a - b);
	// multiply
	printf("a * b = %d\n", a * b);
	// divide
	printf("a / b = %f\n", (float)a / b);
	// modulus
	printf("a %% b = %d\n", a % b);
	// bit shift right
	printf("a >> b = %d\n", a >> b);
	// bit shift left
	printf("a << b = %d\n", a << b);

	return 0;
}