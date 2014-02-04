#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdbool.h>

bool isDir(const char* dirpath)
{
	struct stat dirstat;
	stat(dirpath, &dirstat);
	return S_ISDIR(dirstat.st_mode);
}

int main (int argc, char *argv[]) {
	char *dirpath = 0;
	int result = 0;

	if (argc != 2) { 
		printf("Try again asshole.\n");
		exit(1); 
	}
	dirpath = argv[1];
	printf("Your directory path is [%s]\n", dirpath); /* XXX */
	
	if (isDir(dirpath) == 0){
		printf("Please enter a valid path\n");
		exit(2);
	}
}


