#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct data {
		int v;
		char c;
	} *alpha[26];
	int x;

	/* both allocate and assign the structures */
	for( x=0; x<26; x++ )
	{
		alpha[x] = malloc( sizeof(struct data) );
		if( alpha[x]==NULL )
		{
			puts("Memory allocation error");
			exit(1);
		}
		alpha[x]->v = x;
		alpha[x]->c = 'A'+x;
	}

	/* output */
	for( x=0; x<26; x++ )
		printf("%d, %c\n",alpha[x]->v,alpha[x]->c);

	/* clean-up */
	for( x=0; x<26; x++ )
		free(alpha[x]);
	return 0;
}
