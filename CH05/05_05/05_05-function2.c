#include <stdio.h>
#include <time.h>

void greetings(void)
{
	time_t now;
	struct tm *today;

	time(&now);
	today = localtime(&now);
	if( today->tm_hour > 16 )
	{
		puts("Good Evening");
		return;
	}
	puts("It's not evening");
}

int main()
{
	greetings();

	return(0);
}
