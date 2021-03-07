#include "header.h"


int execute_pwd(char **input_args){
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("Current working dir: %s\n", cwd);

	return 1;
}
