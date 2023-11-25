#include <stdio.h>

int main()
{
	struct date {
		int month;
		int day;
		int year;
	};
	struct date birthday;

	birthday.month = 2;
	birthday.day = 22;
	birthday.year = 1732;

	printf("George Watshington was born on %d/%d/%d\n",
			birthday.month,
			birthday.day,
			birthday.year
		  );

	return(0);
}

