#define HEADER_H

#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <bits/stdc++.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <iostream>
#include <fstream>

using namespace std;

int execute_help(char **args);
int execute_cd(char **input_args);
int execute_pwd(char **input_args);
int execute_echo(char **input_args);
int execute_ls(char **input_args);
int execute_command(char **input_args);
int execute_history(char **input_args);
int execute_whoami(char **input_args);
int execute_exit(char **input_args);
int execute_touch(char **input_args);
int execute_rm(char **input_args);
int execute_unzip(char **input_args);
int execute_zip(char **input_args);
int execute_run(char **input_args);
int execute_getpermission(char **input_args);
int execute_setpermission(char **input_args);
