#include <stdio.h>

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
	} president = {
		{ 2, 22, 1732 },
		"George Washington"
	};

	printf("%s was born on %d/%d/%d\n",
			president.name,
			president.birthday.month,
			president.birthday.day,
			president.birthday.year
		  );

	return(0);
}

