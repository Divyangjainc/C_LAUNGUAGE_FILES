#include <stdio.h>

void main() {
    // size of subjects
    int total_subjects;
    printf("How many subjects you want to add? ");
    scanf("%d", &total_subjects);

    // subjects
    char subjects[total_subjects][15]; // = {"english", "math", "science"};
    for (int i = 0; i < total_subjects; i++) {
        printf("Enter Subject %d: ", (i+1));
        scanf("%s", &subjects[i]);
    }

    // marks
    int marks[total_subjects]; // = {50, 40, 25};
    for (int i = 0; i < total_subjects; i++) {
        printf("Enter marks of %s: ", subjects[i]);
        scanf("%d", &marks[i]);
    }


    // set the max marks
    int max_marks = 100;

    // passing marks
    int passing_marks = 40;

    // printf("╔╤║═");
    printf("***************************************************************************\n");
    printf("* S.No.\t|\tSubjects\t|\tMax Marks\t|\tObt.Marks *\n");
    printf("***************************************************************************\n");

    int total_obt_marks = 0;
    int f_count = 0;

    for (int i = 0; i < total_subjects; i++) {
        if (marks[i] < passing_marks) {
            printf("* %d\t|\t%s    \t|\t%d     \t|\t%d F*\n", (i+1), subjects[i], max_marks, marks[i]);
            f_count += 1;
        } else {
            printf("* %d\t|\t%s    \t|\t%d     \t|\t%d *\n", (i+1), subjects[i], max_marks, marks[i]);
        }
        printf("***************************************************************************\n");
        total_obt_marks += marks[i];
    }

    float ptage = total_obt_marks / total_subjects;

    printf("TOTAL MARKS\t: %d\n", max_marks * total_subjects);
    printf("OBT.MARKS\t: %d\n", total_obt_marks);
    printf("PERCENTAGE\t: %.2f\n", ptage);

    printf("Fail subjects: %d\n\n", f_count);
    
    if (f_count == 0){
        printf("RESULT\t: PASS\n");
    } else if (f_count > 0 && f_count < 3){
        printf("RESULT\t: BACK/SUPP.\n");
    } else {
        printf("RESULT\t: FAIL\n");
    }

    printf("***************************************************************************\n");

}