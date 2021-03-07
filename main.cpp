#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <help.h>

#define BUFFER_SIZE 1024
#define TOK_BUFFER_SIZE 64
#define INPUT_LINE_DELIM " \t\r\n\a"


int execute_cd(char **input_args);
int execute_ls(char **input_args);
int execute_echo(char **input_args);
int execute_pwd(char **input_args);
int execute_history(char **input_args);
int execute_whoami(char **input_args);
int execute_help(char **input_args);
int execute_exit(char **input_args);


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


int (*corresponding_func[]) (char **) = {
	&execute_cd,
	&execute_ls,
	&execute_echo,
	&execute_pwd,
	&execute_history,
	&execute_whoami,
	&execute_help,
	&execute_exit
};


int execute_command(char **input_args){

	if (input_args[0] == NULL) {
	    return 1;
	}

	int poss_comm = sizeof(poss_commands) / sizeof(char *);

	for (int i = 0; i < poss_comm; i++) {
	    if (strcmp(input_args[0], poss_commands[i]) == 0) {
	    	return (*corresponding_func[i])(input_args);
	    }
	}

	// to be completed .... (if no command is found)
	return 0;
}


char** split_input_line(char *input_line){
	int tokbufsize = TOK_BUFFER_SIZE, position = 0;
	char **tokens = (char**) malloc(tokbufsize * sizeof(char*));
	char *token;

	if (!tokens) {
	    fprintf(stderr, "hha@LBP-shell: allocation error\n");
	    exit(EXIT_FAILURE);
	}

	token = strtok(input_line, INPUT_LINE_DELIM);
	while (token != NULL) {
	    tokens[position] = token;
	    position++;

	    if (position >= tokbufsize) {
	        tokbufsize += TOK_BUFFER_SIZE;
	        tokens = (char**) realloc(tokens, tokbufsize * sizeof(char*));
	        if (!tokens) {
	        	fprintf(stderr, "hha@LBP-shell: allocation error\n");
	        	exit(EXIT_FAILURE);
	        }
	    }

	    token = strtok(NULL, INPUT_LINE_DELIM);
	}

	tokens[position] = NULL;
  	return tokens;
}


char* read_input(){
	int buff_size = BUFFER_SIZE;
	int position = 0;
	char *buffer = (char*) malloc(buff_size * sizeof(char));

	if (!buffer) {
	    fprintf(stderr, "hha@LBP-shell: allocation error\n");
	    exit(EXIT_FAILURE);
	}

	char c;
	while(1){
		c = getchar();

		if(c == EOF) {
			exit(EXIT_SUCCESS);
		} else if (c == '\n') {
	    	buffer[position] = '\0';
	    	return buffer;
	    } else {
	    	buffer[position] = c;
	    }
	    position++;

	    if (position >= buff_size) {
		    buff_size += BUFFER_SIZE;
		    buffer = (char*) realloc(buffer, buff_size);
		    if (!buffer) {
			    fprintf(stderr, "hha@LBP-shell: allocation error\n");
			    exit(EXIT_FAILURE);
		    }
	    }
	}
}


void loop_input(){
	char *input_line;
	char **splitted_input;
	int status;

	do {
		printf("hha@LBP-shell>> ");

		input_line = read_input();
		splitted_input = split_input_line(input_line);
		status = execute_command(splitted_input);

		free(input_line);
		free(splitted_input);

	} while (status);
}


int main(){

	printf("*********************************\n\n");
	printf("WELCOME TO OUR UNIX-SHELL-VARIANT\n");
	printf("Developed by: Hemant, Hemil, Ashish\n");
	printf("Under the supervison of: Prof. Manoj Mishra\n");
	printf("Enjoy using it!!!\n\n");
	printf("*********************************\n\n");

	char** something;
	lsh_help(something);

	loop_input();
	return 0;
}