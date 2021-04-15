#include "header.h"

int execute_setpermission(char **input_args) {

    char* file_name = input_args[1];

    char* permissions = input_args[2];
    bool isSet[9] = {false};
    cout<<permissions<<endl;

    for(int i=0;i<9;i++) {
        if(permissions[i] != 'R' && permissions[i] != 'W' && permissions[i] != 'X' && permissions[i] != '-') {
            printf("Enter valid permissions!!!\n");
            return 0;
        }

        if(permissions[i] != '-') {
            isSet[i] = true;
        }
    }

    if(isSet[0] && isSet[1] && isSet[2]) chmod(file_name, S_IRWXU);
    else if(isSet[0] && isSet[1]) chmod(file_name, S_IRUSR | S_IWUSR);
    else if(isSet[0] && isSet[2]) chmod(file_name, S_IRUSR | S_IXUSR);
    else if(isSet[1] && isSet[2]) chmod(file_name, S_IWUSR | S_IXUSR);
    else if(isSet[0]) chmod(file_name, S_IRUSR);
    else if(isSet[1]) chmod(file_name, S_IWUSR);
    else if(isSet[2]) chmod(file_name, S_IXUSR);

    if(isSet[3] && isSet[4] && isSet[5]) chmod(file_name, S_IRWXG);
    else if(isSet[3] && isSet[4]) chmod(file_name, S_IRGRP | S_IWGRP);
    else if(isSet[3] && isSet[5]) chmod(file_name, S_IRGRP | S_IXGRP);
    else if(isSet[4] && isSet[5]) chmod(file_name, S_IWGRP | S_IXGRP);
    else if(isSet[3]) chmod(file_name, S_IRGRP);
    else if(isSet[4]) chmod(file_name, S_IWGRP);
    else if(isSet[5]) chmod(file_name, S_IXGRP);
    
    if(isSet[6] && isSet[7] && isSet[8]) chmod(file_name, S_IRWXO);
    else if(isSet[6] && isSet[7]) chmod(file_name, S_IROTH | S_IWOTH);
    else if(isSet[6] && isSet[8]) chmod(file_name, S_IROTH | S_IXOTH);
    else if(isSet[7] && isSet[8]) chmod(file_name, S_IWOTH | S_IXOTH);
    else if(isSet[6]) chmod(file_name, S_IROTH);
    else if(isSet[7]) chmod(file_name, S_IWOTH);
    else if(isSet[8]) chmod(file_name, S_IXOTH);
    
    return 1;
}