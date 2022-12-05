#include <stdio.h>

void add() {
    printf("%d", 5+6);
}

// more dynamic
int add2(int a, int b) {
    return a + b;
}

void main() {
    // function calling

    int a = add2(5, 9);

    printf("%d", a);
}