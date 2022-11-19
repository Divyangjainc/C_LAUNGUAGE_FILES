#include <stdio.h>

void main() {

    char subjects[5][20] = {"maths","ss","science","english","hindi"};
    int marks[5] = {50, 45, 60, 70, 80};
    int max_marks = 100;
    int passing_marks = 40;
    printf("subject\t|\tMax_marks\t|\tmarks\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t|\t%d\t|\t%d\n", subjects[i], max_marks, marks[i]);
    }
    int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    int percent = total / 5;
    printf("percentage %% is %d", percent);

}