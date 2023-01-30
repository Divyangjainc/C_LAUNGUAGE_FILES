#include<iostream>
using namespace std;

class demo {
    public:
        int a;
        int b;

    // parameterized constructor
    demo(int x, int y) {
        cout << "constructor called" << endl;
            a = 5;
            b = 6;
    }

    // demo() {
    //   cout << "destructor called" << endl;
    // }

    int add() {
        return a + b;
    }
    
};
int main() {
    demo d(5, 9);
    cout << d.a << " and " << d.b << endl;
    cout << d.add() << endl;

    demo b(3, 9);
    cout << b.add() << endl;

}