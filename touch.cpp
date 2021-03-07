#include "header.h"

int execute_touch(char **args) {
    FILE *fp;
    fp = fopen(args[1], "a");

    return 1;
}