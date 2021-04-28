// #include "header.h"
#include <bits/stdc++.h> 
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <ftw.h>
using namespace std; 

static int rmFiles(const char *pathname, const struct stat *sbuf, int type, struct FTW *ftwb)
{
    if(remove(pathname) < 0)
    {
        cout<<"directory is not removable"<<endl;
        return -1;
    }
    return 0;
}

int main(int argc, char const *argv[]){
	if (argv[1] == NULL) {
		cout<<"directory name can't be empty"<<endl;
	} else {
        if (nftw(argv[1], rmFiles,10, FTW_DEPTH|FTW_MOUNT|FTW_PHYS) < 0)
        {
            cout<<"no such directory exist"<<endl;
            exit(-1);
        }
        else{
            cout<<"directory removed successfully"<<endl;
        }
	}
	
    exit(0);
}