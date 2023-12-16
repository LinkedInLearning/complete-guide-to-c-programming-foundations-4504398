#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char *name;
		int age;
	} *you;

	/* allocate storage */
	you = malloc( sizeof(struct person) );
	if( you== NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}
	you->name = malloc( sizeof(char) * 32 );
	if( you->name == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	/* gather input */
	printf("Enter your name: ");
	fgets(you->name,32,stdin);
	printf("Enter your age: ");
	scanf("%d",&you->age);

	printf("You are %s",you->name);
	printf("You are %d years old\n",you->age);

	/* clean-up */
	free(you->name);
	free(you);
	return(0);
}

