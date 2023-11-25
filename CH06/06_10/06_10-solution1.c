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
		float height;
		char name[32];
	};
	struct person me;

	me.birthday.month = 10;
	me.birthday.day = 19;
	me.birthday.year = 1960;
	me.height = 0.001829;
	strcpy(me.name,"Dan Gookin");

	printf("%s was born on %d/%d/%d and is %f kilometers tall\n",
			me.name,
			me.birthday.month,
			me.birthday.day,
			me.birthday.year,
			me.height
		  );
			
	return 0;
}
