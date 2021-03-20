#include "header.h"


extern char *poss_commands[50];

int execute_help(char **args)
{
  printf("Hemant, Hemil, Ashish UNIX SHELL VARIANT\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");

  int i = 0;
  while(poss_commands[i] != NULL) {
    printf("  %s\n", poss_commands[i]);
    i++;
  }

  printf("Use the man command for information on other programs.\n");
  return 1;
}