#include<iostream>
using namespace std;

class demo {
    // public member
    public:
    int a;
    int b;

    // it is a constructur - default constructor
    demo() {
        a = 5;
        b = 6;
        cout << "constructor called" << endl;
    }
    
};

int main() {
    // create an object
    demo d;
    cout << d.a << endl;
}