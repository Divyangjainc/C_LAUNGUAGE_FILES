#include<stdio.h>

void main() {
    // char name[5] = {'d', 'i', 'v', 'y', 'a', 'n', 'g'};
      char name[10] = "divyang";
      printf("%c\n\n", name);
      printf("%s\n\n", name);

      char names[4][15] = {"divyang","akash","dev","naim"};

      for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
      }
}