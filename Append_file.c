#include <stdio.h>

void main() {
    printf("Basic of file handling\n");

    FILE *fp;

    fp = fopen("AppendFile.txt", "a");

    for (int i = 0; i < 5; i++) {
        char data[] = "Content written by file method.\n";
        fputs(data, fp);
    }

    fclose(fp);
}