#include <stdio.h>
#include <string.h>

int main()
{
	char password[] = "secret\n";
	char input[10];

	printf("Password: ");
	fgets(input,10,stdin);

	if( strcmp(password,input)==0 )
		puts("Entry granted!");
	else
		puts("Incorrect password!");

	return(0);
}

