#include <fstream>
#include <iostream>
#include <dirent.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <limits.h>

using namespace std;

enum file_type { file, directory, none };


file_type fileordirectory(char* pointer){

    int status;
    struct stat st_buf;
    file_type answer = none;
    status = stat(pointer, &st_buf);

    // stat function failure
    if (status != 0 && errno != 2) {
        printf ("Error, errno = %d\n", errno);
        return none;
    }

    // Tell us what it is then exit.
    if (S_ISREG(st_buf.st_mode)) {
        answer = file;
    }
    if (S_ISDIR(st_buf.st_mode)) {
        answer = directory;
    }

    return answer;
}



bool copyContent(char* file1, char* file2){

    ifstream in(file1, ios::binary);

    if(in.fail()){
        return false;
    }

    ofstream out(file2, ios::binary);

    char buf[1];
    while(1){
        in.read(buf, 1);
        if(in.eof()) break;
        out.write(buf, 1);
    }

    in.close();
    out.close();

    return true;
}



string extractfilename(char* abs_filename){
    string filename = "";
    int i = 0;
    while(abs_filename[i]) {
          if(abs_filename[i] == '/') filename = "";
          else filename += abs_filename[i];
          i++;
      }
    return filename;
}


int sizeofstirng(char* stg){
  int i = 0;
  while(stg[i]) i++;
  return i;
}


string convertToString(char* a){
    int i;
    string s = "";
    int size = sizeofstirng(a);
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}


bool cpfoldercontenttodest(){return true;}


int main(int argc, char *argv[]) {

    if(argc < 3){
        printf("Invalid arguments passed for \"cp\" command.\n");
        return -1;
    }

    bool branch = true;
    if(argc != 3) branch = false;

    if(branch){
        file_type file1, file2;
        file1 = fileordirectory(argv[1]);
        file2 = fileordirectory(argv[2]);

        if(file1 == file && file2 != file) branch = false;
        else{
          if(file1 == file && file2 == file){
              // cp Src_file Dest_file
              if(copyContent(argv[1], argv[2])) return 0;
              else return 1;
          }
          else if(file1 == directory && file2 == directory){

              DIR *d;
              struct dirent *dir;
              d = opendir(argv[1]);
              if (d) {
                while ((dir = readdir(d)) != NULL) {
                  printf("%s", dir->d_name);
                  file_type ft = fileordirectory(dir->d_name);
                  if(ft == file){
                    string dest;
                    dest = convertToString(argv[2]) + "/" + convertToString(dir->d_name);
                    char* finalname = new char[dest.length()+1];
        	          strcpy(finalname, dest.c_str());
                    copyContent(dir->d_name, finalname);
                  }
                }
                closedir(d);
              }
          }
        }

    }

    if(!branch){
        bool allfiles = true;
        for(int i=1; i<(argc-1) && allfiles; i++){
            if(!fileordirectory(argv[i])) allfiles = false;
        }

        if(!allfiles){
            printf("Invalid arguments passed for \"cp\" command.\n");
            return -1;
        }

        string abs_filename;
        string dest;
        for(int i=1; i<(argc-1); i++){
            abs_filename = extractfilename(argv[i]);
            dest = convertToString(argv[argc-1]);
            dest = dest + "/" + abs_filename;
            char* finalname = new char[dest.length()+1];
	          strcpy(finalname, dest.c_str());
            copyContent(argv[i], finalname);
        }
    }

    return 0;
}
