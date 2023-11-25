#include <stdio.h>

int main()
{
	char item[] = "fish umbrellas";
	int quantity = 12;
	float price = 78.66;

	printf("You have purchased %d %s at $%.2f each\n",
			quantity,
			item,
			price
		  );
	printf("The total cost is $%.2f\n",quantity*price);

	return 0;
}
