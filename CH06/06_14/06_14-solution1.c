#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

struct person fill(void);
void output(struct person y);

struct person {
	char name[SIZE];
	int id;
};

/* main program */
int main()
{
	struct person you;

	/* fill the structure */
	you = fill();

	/* output the structure */
	output(you);

	return 0;
}

struct person fill(void)
{
	static struct person y;

	printf("Your name: ");
	fgets(y.name,SIZE,stdin);
	printf("Your id: ");
	scanf("%d",&y.id);

	return(y);
}

void output(struct person y)
{
	printf("ID %d belongs to %s\n",
			y.id,
			y.name
		  );
}
