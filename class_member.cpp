#include <iostream>
using namespace std;

class Person {
    public:
        char name[15] = "default name";
    
    private:
        long long int mobile = 9874500000;
    
    protected:
        int pin = 7894;

    
    public:
        void get_details() {
            cout << "Public details: " << name << endl;

            cout << "Private details: " << mobile << endl;

            cout << "Protected details: " << pin;
        }
};

int main() {
    // object of Person

    Person p;

    p.get_details();

    return 0;
}