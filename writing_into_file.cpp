#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char data[10] = "hello";
    fstream file;
    // :: is known as scope resolution operator
    file.open("cpp_file.txt", ios::out);
    // fp.open("cpp_file.txt");
    file << data << endl;

    // fp << data;

    file.close();
}