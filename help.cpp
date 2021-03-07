#include <stdio.h>
#include <string.h>


char poss_commands[][50] = {
	"cd",
	"ls",
	"echo",
	"pwd",
	"history",
	"whoami",
	"help",
	"exit"
};


int lsh_help(char **args)
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

int main(int argc, char const *argv[])
{
	
	return 0;
}