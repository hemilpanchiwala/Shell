// #include "header.h"
#include <cstddef>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[]){
	if (argv[1] == NULL) {
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
	} else {
		if (chdir(argv[1]) != 0) {
			perror("lsh");
		}
		else{
			char cwd[1024];
			getcwd(cwd, sizeof(cwd));
			printf("Current working dir: %s\n", cwd);
		}
	}
	return 1;
}
