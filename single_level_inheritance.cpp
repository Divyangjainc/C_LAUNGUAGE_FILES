// transmission of data member from one class to another class is called inheritance.

#include <iostream>
using namespace std;

// base class
class Person {
    public:
        int id;
        char name[10];
};

// child class
class PersonOne:public Person {
    public:
        int mobile = 798798;
};

int main() {
    // creating an object of child class
    PersonOne p;
    p.id = 5;
    char name[10] = "divyang";
    for (int i = 0; i < 10; i++) {
        p.name[i] = name[i];
    }

    printf("%d - %s\n", p.id, p.name);

    cout << p.mobile;

    
}