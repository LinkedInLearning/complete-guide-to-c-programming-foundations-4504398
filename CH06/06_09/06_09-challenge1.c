#include <stdio.h>

int main()
{
	struct date
	{
		int day;
		int month;
		int year;
	};
	struct profile
	{
		struct date birthday;
		float height;
		char f_name[10];
	} me = {{23,2,2003}, 1.65/1000.0, "Renzo"};

	printf("%s was born on %d/%d/%d and is %f km tall",
	me.f_name, me.birthday.day, me.birthday.month, me.birthday.year, me.height);

	return 0;
}
