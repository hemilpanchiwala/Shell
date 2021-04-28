#include <stdio.h>

char poss_commands[21][50] = {
	"ls",
	"echo",
  "cd",
	"pwd",
	"cp",
	"touch",
	"rm",
	"history",
	"whoami",
	"zip",
	"unzip",
	"getp",
	"setp",
	"mkdir",
	"rmdir",
	"mv",
	"screenshot",
	"test",
	"calculator",
	"help",
	"exit"
};

int main(int argc, char const *argv[])
{
  int i;
  printf("Hemant, Hemil, Ashish UNIX SHELL VARIANT\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");

  for (i = 0; i < sizeof(poss_commands) / 50; i++)
  {
    printf("  %s\n", poss_commands[i]);
  }
  
  return 1;
}