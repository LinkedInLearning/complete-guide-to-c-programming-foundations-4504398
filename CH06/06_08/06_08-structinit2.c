#include <stdio.h>

int main()
{
	struct date {
		int month;
		int day;
		int year;
	} birthday = { 2, 22, 1732 };

	printf("George Watshington was born on %d/%d/%d\n",
			birthday.month,
			birthday.day,
			birthday.year
		  );

	return(0);
}

