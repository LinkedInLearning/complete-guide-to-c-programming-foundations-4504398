#include <stdio.h>
#include <unistd.h>

int main()
{
	char path[512];

	getcwd(path,512);
	printf("This program is running in the %s directory\n",path);

	return(0);
}
