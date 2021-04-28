#include <dirent.h>
#include <unistd.h>
#include <stdio.h>


int main(int argc, char const *argv[]){
	char cwd[1024];
 	getcwd(cwd, sizeof(cwd));

	DIR *d;
	struct dirent *dir;
	d = opendir(cwd);
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			printf("%s\n", dir->d_name);
		}
		closedir(d);
	}

	return 1;
}
