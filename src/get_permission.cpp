#include <bits/stdc++.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    char *file_name = argv[1];

    struct stat st;
    if (stat(file_name, &st) == 0)
    {
        mode_t curr_permission = st.st_mode;
        printf("\nUSER\n");
        (curr_permission & S_IRUSR) ? printf("R") : printf("-");
        (curr_permission & S_IWUSR) ? printf("W") : printf("-");
        (curr_permission & S_IXUSR) ? printf("X") : printf("-");
        printf("\nGROUP\n");
        (curr_permission & S_IRGRP) ? printf("R") : printf("-");
        (curr_permission & S_IWGRP) ? printf("W") : printf("-");
        (curr_permission & S_IXGRP) ? printf("X") : printf("-");
        printf("\nOTHERS\n");
        (curr_permission & S_IROTH) ? printf("R") : printf("-");
        (curr_permission & S_IWOTH) ? printf("W") : printf("-");
        (curr_permission & S_IXOTH) ? printf("X") : printf("-");
        printf("\n");
    }
    else
    {
        printf("File does not exist.\n");
        exit(-1);
    }

    exit(0);
}
