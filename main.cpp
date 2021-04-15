#include "header.h"

#define BUFFER_SIZE 1024
#define TOK_BUFFER_SIZE 64
#define INPUT_LINE_DELIM " \t\r\n\a"

using namespace std;

char *poss_commands[50] = {
	"cd",
	"ls",
	"echo",
	"pwd",
	"history",
	"whoami",
	"help",
	"exit",
	"touch",
	"rm",
	"zip",
	"unzip",
	"run",
	"getp",
	"setp"
};


int (*corresponding_func[]) (char **) = {
	&execute_cd,
	&execute_ls,
	&execute_echo,
	&execute_pwd,
	&execute_history,
	&execute_whoami,
	&execute_help,
	&execute_exit,
	&execute_touch,
	&execute_rm,
	&execute_zip,
	&execute_unzip,
	&execute_run,
	&execute_getpermission,
	&execute_setpermission
};

void getMatches(char* s) {
	int i = 0;
	while(poss_commands[i] != NULL) {
		if(i >= 50) {
			printf("Many more possibilties!!!");
			break;
		}
		if(((string)poss_commands[i]).find((string)s) != string::npos) {
			printf("%s ", poss_commands[i]);
		}
		i++;
	}
}


int execute_exit(char **input_args){
  return 0;
}


int execute_command(char **input_args){

	if (input_args[0] == NULL) {
	    return 1;
	}

	int i = 0;
	while(poss_commands[i] != NULL) {
		if (strcmp(input_args[0], poss_commands[i]) == 0) {
	    	return (*corresponding_func[i])(input_args);
	    }
		i++;
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
	system("stty -icanon min 1");
	while(1){
		c = getchar();

		if(c == EOF) {
			exit(EXIT_SUCCESS);
		} else if (c == '\n') {
	    	buffer[position] = '\0';
	    	break;
	    } else if(c == 0x7F) {
			position--;
			if(position >= 0) {
				buffer[position] = '\0';
				position--;
			}
		} else if(c == '\t') {
			cout<<"\n"<<buffer<<"\n";
			printf("\n");
			getMatches(buffer);
			printf("\n");
			position = 0;
			position--;
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

	system("stty cooked");
	return buffer;
}


void loop_input(){
	char *input_line;
	char **splitted_input;
	int status;

	ofstream history_file("history.txt", ios::out | ios::app);
	string command;

	do {
		printf("\033[;32mhha@LBP-shell>>\033[0m ");

		input_line = read_input();
		
		command = input_line;
		command += "\n";
		history_file << command;
		history_file.flush();

		splitted_input = split_input_line(input_line);
		status = execute_command(splitted_input);

		free(input_line);
		free(splitted_input);

	} while (status);

	history_file.close();
}


int main(){

	printf("*********************************\n\n");
	printf("WELCOME TO OUR UNIX-SHELL-VARIANT\n");
	printf("Developed by: Hemant, Hemil, Ashish\n");
	printf("Under the supervison of: Prof. Manoj Mishra\n");
	printf("Enjoy using it!!!\n\n");
	printf("*********************************\n\n");

	char** something;

	loop_input();
	return 0;
}