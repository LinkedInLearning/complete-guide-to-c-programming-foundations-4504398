#include <stdio.h>

int filecopy(char *org,char *dup)
{
	FILE *o,*d;
	int c;

	/* open/create the files */
	o = fopen(org,"r");
	d = fopen(dup,"w");
	if( org==NULL || dup==NULL)
	{
		return(-1);
	}

	/* read/write to copy the file */
	while(1)
	{
		c = fgetc(o);
		if( c == EOF )
			break;
		fputc(c,d);
	}

	/* clean-up */
	fclose(o);
	fclose(d);
	return(0);
}

int main()
{
	char original[] = "beta.txt";
	char duplicate[] = "betacopy.txt";
	int r;

	r = filecopy(original,duplicate);
	if( r==-1 )
		puts("Unable to copy files");
	else
		printf("%s copied to %s\n",original,duplicate);

	return(0);
}
