#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	DIR *directory;
	struct dirent *file;
	struct stat fstat;

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	printf("%-25s %-10s %s\n","Filename","Size","Timestamp");
	while( (file=readdir(directory)) != NULL )
	{
		stat(file->d_name,&fstat);
		printf("%25s %10lld ",
				file->d_name,
				fstat.st_size
			  );
		printf("%s",ctime(&fstat.st_mtime));
	}

	/* close the directory */
	closedir(directory);

	return(0);
}

