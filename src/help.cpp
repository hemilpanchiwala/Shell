#include <stdio.h>

char poss_commands[15][50] = {
    "ls",
    "echo",
    "pwd",
    "cp",
    "touch",
    "rm",
    "history",
    "whoami",
    "zip",
    "unzip",
    "run",
    "getp",
    "setp",
    "help",
    "exit",
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
    i++;
  }

  printf("Use the man command for information on other programs.\n");
  return 1;
}
