#define HEADER_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int execute_help(char **args);
int execute_cd(char **input_args);
int execute_pwd(char **input_args);