#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %f\n",a,b,(float)a/b);
	printf("%d %% %d = %d\n",a,b,a%b);
	printf("%d >> %d = %d\n",a,b,a>>b);
	printf("%d << %d = %d\n",a,b,a<<b);

	return 0;
}
