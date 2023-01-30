#include <iostream>
using namespace std;

class Father {
    public:
        void house() {
            cout << "house from father" << endl;
        }
        
        void car() {
            cout << "car from father" << endl;
        }
};

class Mother {
    public:
        void cash() {
            cout << "cash from mother" << endl;
        }
};

class Child: public Father, public Mother {
    public:
        void cycle() {
            cout << "child has cycle only" << endl;
        }
};

int main() {
    Child c;
    c.cycle();
    c.car();
    c.house();
    c.cash();
}