#include <cstdlib>
#include <fstream>


int main(int argc, char const *argv[]) {
    int status = remove(argv[1]);

    if(status == 0) {
        exit(0);
    } else {
        perror("Unable to find the file to delete!");
        exit(-1);
    }

    exit(0);
}
