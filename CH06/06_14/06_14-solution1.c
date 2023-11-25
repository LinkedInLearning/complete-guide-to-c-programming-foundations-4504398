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

void show(struct person p[])
{
	int x;

	puts("Presidents:");
	for(x=0;x<4;x++)
	{
		printf("President %s took office on %d/%d/%d\n",
				p[x].name,
				p[x].tookoffice.month,
				p[x].tookoffice.day,
				p[x].tookoffice.year
			  );
	}
}

int main()
{
	struct person presidents[4] = {
		{ "George Washington", { 4, 30, 1789 } },
		{ "Thomas Jefferson", { 3, 4, 1801 } },
		{ "Abraham Lincoln", { 3, 4, 1861 } },
		{ "Theodore Roosevelt", { 9, 14, 1901 } }
	};
	struct person temp;

	/* show them */
	show(presidents);
	/* swap 2 and 3 */
	printf("Swapping...");
	temp = presidents[1];
	presidents[1] = presidents[2];
	presidents[2] = temp;
	printf("done!\n");
	/* show again */
	show(presidents);

	return(0);
}

