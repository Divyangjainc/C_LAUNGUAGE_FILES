#include <stdio.h>

void main() {
    // read file

    FILE *fp;

    fp = fopen("mytextfile.txt", "r");

    char data[15];

    fgets(data, 15, fp);

    printf("%s", data);

    fclose(fp);

    // lenght

    // char s[] = "hellos";
    // int n[5];

    // printf("%d", sizeof(n) / 4);
}