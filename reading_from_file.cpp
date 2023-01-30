#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("cpp_file.txt", ios::in);
    char data[10];
    file >> data;
    cout << data;
    file.close();
}