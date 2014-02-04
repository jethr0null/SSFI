#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	char *dirpath = 0;

	if (argc != 2) { 
		printf("Try again asshole.\n");
		exit(1); 
	}
	dirpath = argv[1];
	printf("Your directory path is [%s]\n", dirpath);
}


