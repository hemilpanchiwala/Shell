#include "header.h"


int execute_ls(char **input_args){
	char cwd[1024];
 	getcwd(cwd, sizeof(cwd));

	DIR *d;
	struct dirent *dir;
	d = opendir(cwd);
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			printf("%s\n", dir->d_name);
		}
		closedir(d);
	}

	return 1;
}