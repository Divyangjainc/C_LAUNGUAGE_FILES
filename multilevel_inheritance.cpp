#include <iostream>
using namespace std;
// multi level inheritance

class GrandParents {
    public:
        void bunglow() {
            cout << "bunglow from grand parents" << endl;
        }
};
class Parents: public GrandParents {
    private:
        void car() {
            cout << "car from parents" << endl;
        }
        
    public:
        void house() {
            cout << "house from parents" << endl;
        }
};
class Child: public Parents {
    public:
        void nothing() {
            cout << "child has no property" << endl;
        }
};

int main() {
    Child c;

    c.bunglow();
    c.car(); // can't access because of private method
    c.house();
    c.nothing();
}