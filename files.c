#include <stdio.h>

void main() {
    // working with files

    FILE *fp;

    fp = fopen("mytextfile.txt", "w"); // open a file with write mode

    fclose(fp); // close file
}