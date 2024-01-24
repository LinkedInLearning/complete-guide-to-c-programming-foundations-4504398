#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* main program */
int main()
{
	const int size = 32;
	int x;
	char input[size];

	while(1)
	{
		x = 0;
		printf("Command: ");
		fgets(input,size,stdin);
		while( input[x] != '\0' )
		{
			if( input[x]=='\n' )
			{
				input[x]='\0';
				break;
			}
			input[x] = toupper(input[x]);
			x++;
		}
		printf("Processing command '%s'\n",input);
		if( strcmp(input,"QUIT")==0 )
			break;
	}

	return 0;
}
