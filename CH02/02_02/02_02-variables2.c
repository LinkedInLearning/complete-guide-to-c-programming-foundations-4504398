#include <stdio.h>

int main()
{
	/* valid variable names */
	int i123456789;			/* must start with a letter */
	int looping_value;		/* can include underscores, not spaces */
	int modemOnlineDetect;	/* camel case */
	
	/* naughty variable names */
	char return;			/* 'return' is a keyword */
	int puts;				/* 'puts' is a function name */
	float new;				/* 'new' is a C++ reserved word */

	return 0;
}
