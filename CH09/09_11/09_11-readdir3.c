#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;
	struct dirent *file;

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	while( (file=readdir(directory)) != NULL )
		printf("Found the file %s\n",file->d_name);

	/* close the directory */
	closedir(directory);

	return(0);
}

