#include <iostream>
using namespace std;

class A {
    public:
        int a;
};

class B: public A {
    public:
        int b;
};

class C {
    public:
        int c;
};

class D: public B, public C {
    public:
        int d;
};

int main() {
    D obj;

    obj.a = 5;
    obj.b = 6;
    obj.c = 7;
    obj.d = 8;

    cout << obj.a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;
    cout << obj.d << endl;
}