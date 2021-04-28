#include <cstdlib>
#include <unistd.h>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]){
	size_t bufsize = 1024;
	char *buffer = (char*) malloc(sizeof(char) * 1024);
	getlogin_r(buffer, bufsize);
	cout<<buffer<<endl;
	
	exit(0);
}
