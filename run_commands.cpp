#include "header.h"

#define SIZE 1024

int execute_run(char **input_args) {

    FILE *fp = fopen(input_args[1], "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    char c[SIZE];
    while(fgets(c, sizeof(c), fp)) {

        char *arr[SIZE] = {NULL};
        int n = 0;

        for(char *p = strtok(c, " "); n<SIZE && p; p = strtok(NULL, " ")) {
            arr[n] = p;
            for(int i=0;i<SIZE;i++) {
                if(arr[n][i] == '\n') {
                    arr[n][i] = '\0';
                }
            }
            n++;
        }

        execute_command(arr);
    }

    return 1;
}
