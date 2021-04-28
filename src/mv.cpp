#include <cstdlib>
#include <bits/stdc++.h> 
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
using namespace std;

    // check if it is the same inode on the same device
#define SAME_INODE(a, b) ((a).st_ino == (b).st_ino && (a).st_dev == (b).st_dev)

    // ALL CHECKS OMMITTED!

int main(int argc, char const *argv[]){

  struct stat statbuf_src, statbuf_dest;
  char *src, *dest, *new_src, *new_dest;
  char *current_directory;

  if (argv[1]==NULL||argv[2]==NULL) {
    fprintf(stderr, "usage: %s src dest\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  // work on copy
  src = (char*)malloc(strlen(argv[1]) + 1);
  dest = (char*)malloc(strlen(argv[2]) + 1);
  strcpy(src, argv[1]);
  strcpy(dest, argv[2]);

  stat(src, &statbuf_src);
  stat(dest, &statbuf_dest);

  // there are many more, of course
//   printf("\"%s\" is a ", src);
  if (S_ISREG(statbuf_src.st_mode)) {
    // puts("a regular file");
    cout<<src<<" is a regular file"<<endl;
  }
  else if (S_ISDIR(statbuf_src.st_mode)) {
    // puts("a directory");
    cout<<src<<" is a directory"<<endl;
  }
  else{
      cout<<src<<" doesn't exist"<<endl;
      return 1;
  }

//   printf("\"%s\" is a ", dest);
  if (S_ISREG(statbuf_dest.st_mode)) {
    // puts("a regular file");
    cout<<dest<<" is a regular file"<<endl;
  }
  else if (S_ISDIR(statbuf_dest.st_mode)) {
    // puts("a directory");
    cout<<dest<<" is a directory"<<endl;
  }
  else{
      cout<<dest<<" doesn't exist"<<endl;
      return 1;
  }

  if (SAME_INODE(statbuf_dest, statbuf_src)) {
    printf("%s and %s are the identical\n", src, dest);
  }
  // if that is not set you have to do it by hand:
  // climb up the tree, concatenating names until the inodes are the same
  current_directory = getenv("PWD");
  printf("current directory is \"%s\"\n", current_directory);

  // I'm pretty sure it can be done in a much more elegant way
  new_src = (char*)malloc(strlen(src) + 1 + strlen(current_directory) + 1);
  strcpy(new_src,current_directory);
  strcat(new_src,"/");
  strcat(new_src,src);
  printf("new_src = %s\n",new_src);

  new_dest = (char*)malloc(strlen(dest) + 1 + strlen(current_directory) + 1 + strlen(src) + 1);
  strcpy(new_dest,current_directory);
  strcat(new_dest,"/");
  strcat(new_dest,dest);
  strcat(new_dest,"/");
  strcat(new_dest,src);
  printf("new_dest = %s\n",new_dest);

  if(rename(new_src,new_dest) != 0){
    fprintf(stderr,"rename failed with error %s\n",strerror(errno));
  }

  free(new_src);
  free(new_dest);
  free(src);
  free(dest);

  exit(0);
}