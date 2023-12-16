#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	/* add */
	printf("%d + %d = %d\n",a,b,a+b);
	/* subtract */
	printf("%d - %d = %d\n",a,b,a-b);
	/* multiply */
	printf("%d * %d = %d\n",a,b,a*b);
	/* divide */
	printf("%d / %d = %f\n",a,b,(float)a/b);
	/* modulus */
	printf("%d %% %d = %d\n",a,b,a%b);
	/* bit shift right */
	printf("%d >> %d = %d\n",a,b,a>>b);
	/* bit shift left */
	printf("%d << %d = %d\n",a,b,a<<b);

	return 0;
}
