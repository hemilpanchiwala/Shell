#include "header.h"


extern char *poss_commands[50];

int execute_help(char **args)
{
  int i;
  printf("Hemant, Hemil, Ashish UNIX SHELL VARIANT\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");

  for (i = 0; i < sizeof(poss_commands)/50; i++) {
    printf("  %s\n", poss_commands[i]);
  }

  printf("Use the man command for information on other programs.\n");
  return 1;
}