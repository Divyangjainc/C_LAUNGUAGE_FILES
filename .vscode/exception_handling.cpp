#include <iostream>
using namespace std;

float division(int x, int y) {
    if (y==0) {
        throw "cannot divide by zero.";
    } else {
        return (float) x / y;
    }
};

int main() {
    float result;
    try {
        result = division(5, 2);
        cout << "division result: " << result << endl;
    } catch (const char* error) {
        cout << error << endl;
    }
}