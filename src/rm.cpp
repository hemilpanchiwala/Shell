#include <fstream>


int main(int argc, char const *argv[]) {
    int status = remove(argv[1]);

    if(status == 0) {
        return 1;
    } else {
        perror("Unable to find the file to delete!");
    }

    return 1;
}
