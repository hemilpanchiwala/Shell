#define HEADER_H

#include <sys/wait.h>
#include <sys/types.h>
#include <bits/stdc++.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <iostream>
#include <fstream>

int execute_help(char **args);
int execute_cd(char **input_args);
int execute_pwd(char **input_args);
int execute_echo(char **input_args);
int execute_ls(char **input_args);
