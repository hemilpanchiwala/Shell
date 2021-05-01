#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024
#define TOK_BUFFER_SIZE 64
#define INPUT_LINE_DELIM " \t\r\n\a"

using namespace std;

# define PATH "/home/blackreaper/Documents/Shell/"


char poss_commands[18][50] = {
	"ls",
	"echo",
	"cp",
	"touch",
	"rm",
	"history",
	"whoami",
	"zip",
	"unzip",
	"getp",
	"setp",
	"help",
	"mkdir",
	"rmdir",
	"mv",
	"screenshot",
	"test",
	"calculator"
};

void getMatches(char *s){
	int i = 0;
	for (i = 0; i < sizeof(poss_commands) / 50; i++)
	{
		if (((string)poss_commands[i]).find((string)s) != string::npos)
		{
			printf("%s ", poss_commands[i]);
		}
	}
}

void execute_exit()
{
	exit(0);
}

int execute_pwd(char **argv){
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("Current working dir: %s\n", cwd);

	return 1;
}


int execute_cd(char **argv){
	if (argv[1] == NULL) {
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
		return 0;
	}
	else
	{
		if (chdir(argv[1]) != 0)
		{
			perror("lsh");
			return 0;
		}
		else
		{
			char cwd[1024];
			getcwd(cwd, sizeof(cwd));
			printf("Current working dir: %s\n", cwd);
		}
	}
	return 1;
}

char **split_input_line(char *input_line)
{
	int tokbufsize = TOK_BUFFER_SIZE, position = 0;
	char **tokens = (char **)malloc(tokbufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "hha@LBP-shell: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(input_line, INPUT_LINE_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= tokbufsize)
		{
			tokbufsize += TOK_BUFFER_SIZE;
			tokens = (char **)realloc(tokens, tokbufsize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "hha@LBP-shell: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, INPUT_LINE_DELIM);
	}

	tokens[position] = NULL;
	return tokens;
}

char *read_input()
{
	int buff_size = BUFFER_SIZE;
	int position = 0;
	char *buffer = (char *)malloc(buff_size * sizeof(char));

	if (!buffer)
	{
		fprintf(stderr, "hha@LBP-shell: allocation error\n");
		exit(EXIT_FAILURE);
	}

	char c;
	system("stty -icanon min 1");
	while (1)
	{
		c = getchar();

		if (c == EOF)
		{
			exit(EXIT_SUCCESS);
		}
		else if (c == '\n')
		{
			buffer[position] = '\0';
			break;
		}
		else if (c == 0x7F)
		{
			position--;
			if (position >= 0)
			{
				buffer[position] = '\0';
				position--;
			}
		}
		else if (c == '\t')
		{
			cout << "\n"
				 << buffer << "\n";
			printf("\n");
			getMatches(buffer);
			printf("\n");
			position = 0;
			position--;
		}
		else
		{
			buffer[position] = c;
		}
		position++;

		if (position >= buff_size)
		{
			buff_size += BUFFER_SIZE;
			buffer = (char *)realloc(buffer, buff_size);
			if (!buffer)
			{
				fprintf(stderr, "hha@LBP-shell: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}

	system("stty cooked");
	return buffer;
}

int execute_run(char **argv);


int execute_run(char **argv)
{

	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error opening file!\n");
		return 0;
	}

	return 1;
}

void loop_input(){
	char *input_line;
	char **splitted_input;
	int status = 1;

	ofstream history_file("history.txt", ios::out | ios::app);
	string command;

	int no_poss_comm = sizeof(poss_commands) / 50;

	do {
		printf("\033[;32mhha@LBP-shell>>\033[0m ");

		input_line = read_input();

		// wirte the command in history file
		command = input_line;
		command += "\n";
		history_file << command;
		history_file.flush();

		// split input command against whitespace or other identations
		splitted_input = split_input_line(input_line);

		if (splitted_input[0] == NULL) {
		    status = 1;
		}
		else{
			bool matched = false;
			for (int i = 0; i < no_poss_comm && !matched; i++) {

			    if (strcmp(splitted_input[0], poss_commands[i]) == 0) {
					int pid = fork();
					if(pid < 0) fprintf(stderr, "fork error!");
				    else if(pid == 0){
						char* tobesent[50];
						int ind = 0;
						while(splitted_input[ind]){
							tobesent[ind] = splitted_input[ind];
							ind++;
						}
						tobesent[ind] = splitted_input[ind];
						char filename[] = PATH;
				        strcat(filename, poss_commands[i]);
				        execvp(filename, splitted_input);
				    }
				    else{
				    	if ((pid = waitpid(pid, &status, 0)) < 0)
							fprintf(stderr, "pid error!");
						status = 1;
				    }
					matched = true;
			    }
			}

			if (strcmp(splitted_input[0], "cd") == 0) {
				status = execute_cd(splitted_input);
				matched = true;
			}
			else if (strcmp(splitted_input[0], "pwd") == 0) {
				status = execute_pwd(splitted_input);
				matched = true;
			}
			else if (strcmp(splitted_input[0], "exit") == 0) {
				free(input_line);
				free(splitted_input);
				history_file.close();
				execute_exit();
			}
			else{
				int pid = fork();
				if(pid < 0) fprintf(stderr, "fork error!");
				else if(pid == 0){
					char current_path[1024];
					getcwd(current_path, sizeof(current_path));
					strcat(current_path, "/");
					strcat(current_path, splitted_input[0]);
					int executed = execvp(current_path, splitted_input);
					if(executed == -1) {
						printf("The command entered is not supported by this shell!!!\n");
						kill(getpid(), SIGKILL);
					}
				}
				else{
					if ((pid = waitpid(pid, &status, 0)) < 0)
						fprintf(stderr, "pid error!");
					status = 1;
				}
				matched = true;
			}

			if(!matched){
				printf("The command entered is not supported by this shell!!!\n");
				status = 1;
			}

		}

		free(input_line);
		free(splitted_input);

	} while (status);

	history_file.close();
}

int main()
{

	printf("*********************************\n\n");
	printf("WELCOME TO OUR UNIX-SHELL-VARIANT\n");
	printf("Developed by: Hemant, Hemil, Ashish\n");
	printf("Under the supervison of: Prof. Manoj Mishra\n");
	printf("Enjoy using it!!!\n\n");
	printf("*********************************\n\n");

	char **something;

	loop_input();
	return 0;
}
