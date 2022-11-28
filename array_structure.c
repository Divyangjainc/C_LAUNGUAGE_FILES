#include<stdio.h>

void main() {
    // collect information of multiple person

    struct marksheet_form {
        int roll_num;
        char name[10];
        char subjects[2][10];
        int max_marks;
        int obtained_marks[2];
        int total_obt_marks;
    };

    struct marksheet_form marksheet[2];

    char name[10] = "divyang";
    char subjects[2][10] = {"math", "science"};

    marksheet[0].roll_num = 101;
    for (int i = 0; i < 10; i++) {
        marksheet[0].name[i] = name[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            marksheet[0].subjects[i][j] = subjects[i][j];
        }
    }

    marksheet[0].max_marks = 100;
    marksheet[0].obtained_marks[0] = 50;
    marksheet[0].obtained_marks[1] = 40;

    marksheet[0].total_obt_marks = 0;
    for (int i = 0; i < 2; i++) {
        marksheet[0].total_obt_marks += marksheet[0].obtained_marks[i];
    }

    printf("Roll No.: %d\n", marksheet[0].roll_num);
    
    printf("Name: %s\n", marksheet[0].name);
    printf("Subjects: %s %s\n", marksheet[0].subjects[0], marksheet[0].subjects[1]);
    printf("Obtained Marks: %d %d\n", marksheet[0].obtained_marks[0], marksheet[0].obtained_marks[1]);
    printf("Total Obtained: %d\n", marksheet[0].total_obt_marks);
    
}