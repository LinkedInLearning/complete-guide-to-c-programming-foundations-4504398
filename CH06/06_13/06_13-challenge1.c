#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};
struct person {
	char name[32];
	struct date tookoffice;
};

int main()
{
	struct person presidents[4] = {
		{ "George Washington", { 4, 30, 1789 } },
		{ "Thomas Jefferson", { 3, 4, 1801 } },
		{ "Abraham Lincoln", { 3, 4, 1861 } },
		{ "Theodore Roosevelt", { 9, 14, 1901 } }
	};

	/* show them */
	
	/* swap 2 and 3 */
	
	/* show again */

	return(0);
}

