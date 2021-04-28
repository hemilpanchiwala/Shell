#include <cstdlib>
#include <stdio.h>


int main(int argc, char const *argv[]){
	int position = 1;
	while(argv[position] != NULL){
		printf("%s ", argv[position]);
		position++;
	}
	printf("\n");
	exit(0);
}
