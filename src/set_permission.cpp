#include <bits/stdc++.h>
#include <sys/stat.h>

using namespace std;

int main(int argc, char *argv[])
{

    char *file_name = argv[1];

    char *permissions = argv[2];
    bool isSet[9] = {false};

    for (int i = 0; i < 9; i++)
    {
        if (permissions[i] != 'R' && permissions[i] != 'W' && permissions[i] != 'X' && permissions[i] != '-')
        {
            printf("Enter valid permissions!!!\n");
            return 0;
        }

        if (permissions[i] != '-')
        {
            isSet[i] = true;
        }
    }

    int pp;
    if (isSet[0] && isSet[1] && isSet[2])
        pp = S_IRWXU;
    else if (isSet[0] && isSet[1])
        pp = S_IRUSR | S_IWUSR;
    else if (isSet[0] && isSet[2])
        pp = S_IRUSR | S_IXUSR;
    else if (isSet[1] && isSet[2])
        pp = S_IWUSR | S_IXUSR;
    else if (isSet[0])
        pp = S_IRUSR;
    else if (isSet[1])
        pp = S_IWUSR;
    else if (isSet[2])
        pp = S_IXUSR;

    if (isSet[3] && isSet[4] && isSet[5])
        pp = pp | S_IRWXG;
    else if (isSet[3] && isSet[4])
        pp = pp | S_IRGRP | S_IWGRP;
    else if (isSet[3] && isSet[5])
        pp = pp | S_IRGRP | S_IXGRP;
    else if (isSet[4] && isSet[5])
        pp = pp | S_IWGRP | S_IXGRP;
    else if (isSet[3])
        pp = pp | S_IRGRP;
    else if (isSet[4])
        pp = pp | S_IWGRP;
    else if (isSet[5])
        pp = pp | S_IXGRP;

    if (isSet[6] && isSet[7] && isSet[8])
        pp = pp | S_IRWXO;
    else if (isSet[6] && isSet[7])
        pp = pp | S_IROTH | S_IWOTH;
    else if (isSet[6] && isSet[8])
        pp = pp | S_IROTH | S_IXOTH;
    else if (isSet[7] && isSet[8])
        pp = pp | S_IWOTH | S_IXOTH;
    else if (isSet[6])
        pp = pp | S_IROTH;
    else if (isSet[7])
        pp = pp | S_IWOTH;
    else if (isSet[8])
        pp = pp | S_IXOTH;

    chmod(file_name, pp);

    return 1;
}