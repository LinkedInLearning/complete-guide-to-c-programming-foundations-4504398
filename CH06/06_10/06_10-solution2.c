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
		float height;
		char name[32];
	};
	struct person me = {
		{ 10, 19, 1960 },
		0.01829,
		"Dan Gookin"
	};

	printf("%s was born on %d/%d/%d and is %f kilometers tall\n",
			me.name,
			me.birthday.month,
			me.birthday.day,
			me.birthday.year,
			me.height
		  );
			
	return 0;
}
