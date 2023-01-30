#include<stdio.h>

void main() {
    // creating a structure using struct keyword
    // What is structure?
    // A way to collect various data/data types at a signle place.

    struct info {
        int id;
        char name[10];
        char city[10];
        int age;
    };

    // define a variable of info

    struct info myinfo;

    myinfo.id = 1;
    char name[10] = "divyang";
    char city[10] = "Ahmedabad";

    for (int i =0; i < 10; i++) {
        myinfo.name[i] = name[i];
    }

    for (int i =0; i < 10; i++) {
        myinfo.city[i] = city[i];
    }
    
    myinfo.age = 22;

    printf("ID: %d\n", myinfo.id);
    printf("name: %s\n", myinfo.name);
    printf("city: %s\n", myinfo.city);
    printf("age: %d", myinfo.age);
    
}