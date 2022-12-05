#include <stdio.h>

void main() {
    char alpha_1 = 'b';
    char alpha_2 = 'B';
    int diff = alpha_1 - alpha_2;

    printf("%d - %d = %d\n\n", alpha_1, alpha_2, diff);

    char name[] = "divyang jain";

    int len = (sizeof(name) / 1) - 1;
    
    // printf("%d", len);

    for (int i = 0; i < len; i++) {
        
        if(name[i] == 32) {
            name[i] = ' ';
        } else {
            name[i] = name[i] - 32;
        }
    }

    printf("%s\n\n", name);

    printf("%c", 'j' - 32);
}