#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	struct stat fstat;

	stat("alpha.txt",&fstat);
	printf("%s is %ld bytes long\n",
			filename,
			fstat.st_size
		  );
	printf("It was modified on %s",ctime(&fstat.st_mtime));

	return(0);
}

