#include <iostream>
using namespace std;

class demo {
    // access specifier is must
    public:
        char name[5] = "demo";
    
    private:
        int mobile = 8954445;
    
    protected:
        int password = 7987;
};

int main() {
    // creating an object of demo class
    demo d;

    // access the member of class demo
    // printf("%s", d.name);
    cout << d.name << endl;

    // cout << d.mobile;

    //cout << d.password;

    return 0;
}