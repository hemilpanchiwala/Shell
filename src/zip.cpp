#include "libzip-1.7.3/lib/zip.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int err = 0;
    zip *z = zip_open(argv[1], 1, &err);

    int i = 2;
    while (argv[i] != NULL)
    {

        FILE *file = fopen(argv[i], "r");
        char *code;
        size_t n = 0;
        int c;

        code = (char *)malloc(5000);

        while ((c = fgetc(file)) != EOF)
        {
            code[n++] = (char)c;
        }

        code[n] = '\0';

        zip_source_t *s = zip_source_buffer(z, code, n, 0);
        zip_file_add(z, argv[i], s, 0);
        i++;
    }

    zip_close(z);

    exit(0);
}
