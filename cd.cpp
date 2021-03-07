#include "header.h"


int execute_cd(char **input_args){
	if (input_args[1] == NULL) {
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
	} else {
		if (chdir(input_args[1]) != 0) {
			perror("lsh");
		}
		else{
			execute_pwd(input_args);
		}
	}
	return 1;
}