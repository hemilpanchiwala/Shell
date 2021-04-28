#include <cstdlib>
#include <bits/stdc++.h> 
#include <iostream> 
#include <sys/stat.h> 
#include <sys/types.h> 
using namespace std; 

int main(int argc, char const *argv[]){
	if (argv[1] == NULL) {
		cout<<"directory name can't be empty"<<endl;
		exit(-1);
	} 
	else {
        if (mkdir(argv[1], 0777) == -1){
            cerr << "Error :  " << strerror(errno) << endl; 
			exit(-1);
		}
        else
            cout << "Directory created"<<endl; 
	}

	exit(0);
}