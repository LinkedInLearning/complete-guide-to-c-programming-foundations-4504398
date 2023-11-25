#include <stdio.h>
#include <string.h>

int main()
{
	struct date {
		int month;
		int day;
		int year;
	};
	struct person {
		struct date birthday;
		char name[32];
	};
	struct person president;

	president.birthday.month = 2;
	president.birthday.day = 22;
	president.birthday.year = 1732;
	strcpy(president.name,"George Washington");

	printf("%s was born on %d/%d/%d\n",
			president.name,
			president.birthday.month,
			president.birthday.day,
			president.birthday.year
		  );

	return(0);
}

