#include "libzip-1.7.3/lib/zip.h"
#include <bits/stdc++.h>

using namespace std;

int execute_zip(char **args) {
    int err = 0;
    zip *z = zip_open(args[1], 1, &err);

    int i = 2;
    while(args[i] != NULL) {
        
        FILE *file = fopen(args[i], "r");
        char *code;
        size_t n = 0;
        int c;

        code = (char *)malloc(5000);

        while ((c = fgetc(file)) != EOF)
        {
            code[n++] = (char) c;
        }

        code[n] = '\0';

        zip_source_t *s = zip_source_buffer(z, code, n, 0);
        zip_file_add(z, args[i], s, 0);
        i++;
    }

    zip_close(z);

    return 1;
}
