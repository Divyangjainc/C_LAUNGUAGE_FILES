#include <stdio.h>

void main() {
    // name + city = name_city
    int roll_num = 10145;
    int roll_digit_len = 0;
    int t_roll = roll_num;

    while (t_roll != 0) {
        t_roll = t_roll / 10;
        roll_digit_len += 1;
    }
    // printf("%d ", roll_digit_len);
    // printf("%d", roll_num / 10);
    
    char roll_n[roll_digit_len];
    sprintf(roll_n, "%d", roll_num); // int to string

    // printf("%s", roll_n);

    char name[] = "jatin";
    char city[] = "ahmedabad";

    int name_len = sizeof(name) - 1;
    int city_len = sizeof(city) - 1;

    char joint = '_';
    char file_ext[4] = ".txt";

    int file_ext_len = sizeof(file_ext) - 1;
    int total_len = roll_digit_len + name_len + city_len + 2 + 4;

    // printf("%d", name_len);
    char joint_string[total_len];

    for (int i = 0; i < roll_digit_len; i++) {
        joint_string[i] = roll_n[i];
    }
    joint_string[roll_digit_len] = joint;
    printf("%s\n", joint_string);
    
    for (int i = 0; i < name_len; i++) {
        joint_string[roll_digit_len+1+i] = name[i];
    }
    
    joint_string[roll_digit_len+name_len+1] = joint;
    printf("%s\n", joint_string);

    for (int i = 0; i < city_len; i++) {
        joint_string[roll_digit_len+name_len+1+1+i] = city[i];
    }
    joint_string[roll_digit_len+name_len+1] = joint;
    
    printf("%s\n", joint_string);

    for (int i = 0; i <= file_ext_len; i++) {
        joint_string[roll_digit_len+name_len+city_len+1+1+i] = file_ext[i];
    }
    printf("%s\n", joint_string);
    

    // int a = 100;
    // char b[5];

    // sprintf(b, "%d", a);
    // printf("%s", b);

    FILE *fp;
    // fp  = fopen(("%s", joint_string), "w");
    fp  = fopen(joint_string, "w");
    fclose(fp);
}