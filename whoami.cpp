#include "header.h"

using namespace std;


int execute_whoami(char **input_args){
	size_t bufsize = 1024;
	char *buffer = (char*) malloc(sizeof(char) * 1024);
	getlogin_r(buffer, bufsize);
	cout<<buffer<<endl;
	return 1;
}