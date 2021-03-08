#include "header.h"


int execute_echo(char **input_args){
	int s = sizeof(input_args);
	int position = 1;
	while(input_args[position] != NULL){
		printf("%s ", input_args[position]);
		position++;
	}
	printf("\n");
	return 1;
}