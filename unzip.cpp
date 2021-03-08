#include "libzip-1.7.3/lib/zip.h"
#include <bits/stdc++.h>

using namespace std;

int execute_unzip(char** args) {
    int err = 0;
    zip *z = zip_open(args[1], 0, &err);

    int p = 0;

    while(zip_get_name(z, p, 1) != NULL) {
        const char *name = zip_get_name(z, p, 1);
        struct zip_stat st;
        zip_stat_init(&st);
        zip_stat(z, name, 0, &st);

        char *contents = new char[st.size];

        zip_file *f = zip_fopen(z, name, 0);
        zip_fread(f, contents, st.size);

        fstream file;

        file.open(name, ios_base::app | ios_base::in);
        if (file.is_open())
            file << contents;

        zip_fclose(f);

        delete[] contents;
        p++;
    }

    zip_close(z);

    return 1;
}
