#include "header.h"

int execute_rm(char **args) {
    int status = remove(args[1]);

    if(status == 0) {
        return 1;
    } else {
        perror("Unable to find the file to delete!");
    }

    return 1;
}