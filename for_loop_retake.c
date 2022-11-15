#include <stdio.h>

void main() {
    // create an sequece/array
    char name[7] = {'d', 'i', 'v', 'y', 'a', 'n', 'g'};

    // access an item from array using an index number with for loop
    // In for loop, i is an iteration variable
    for (int i=0; i <= 6; i++) {
        printf("%c at index number %d\n", name[i], i);
    }

    // print items from last index
    for (int i = 6; i >= 0; i--) {
        printf("%c at index number %d\n", name[i], i);
    }
}