#include <stdio.h>

void main() {
    // write text to file

    FILE *fp;

    // write mode and append mode

    // fp = fopen("mytextfile.txt", "w");


    fp = fopen("mytextfile.txt", "a");

    // fputs();

    fputs(" world", fp);

    fclose(fp);
}