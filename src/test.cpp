// #include "header.h"
#include <bits/stdc++.h> 
using namespace std; 

int main(int argc, char const *argv[]){
    if(strcmp(argv[1],"speaker")==0){
        system("speaker-test -t wav -c 6 -l 1");
        // cout<<"\a"<<endl;
        // char c;
        // system("stty -icanon min 1");
        // c = getchar();
        // if(c == '\n'){
        //     system("stty cooked");
        //     return 1;
        // }
            // return 1;
    }
    if(strcmp(argv[1],"keyboard")==0){
        char c;
        system("stty -icanon min 1");
        while (1)
        {
            c = getchar(); 
            if (c == '\n')
            {
                // exit(EXIT_SUCCESS);
                break;
            }
            cout<<" "<<c<<endl;
        }

        system("stty cooked");
        // cout<<endl;
    }
    return 0;
}