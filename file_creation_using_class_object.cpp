#include <iostream>
#include <fstream>
using namespace std;

class FileOperation {
    public:
        fstream file;
        char data[1000];
        void create_file(const char filename[]) {
           file.open(filename, ios::out);
        }

        void write_file(const char* filedata) {
            file << filedata;
            file.close();
        }
        void read_file(const char filename[]) {
            file.open(filename, ios::in);
            // file >> data;
            file.read(data, 100);
            cout << data;
            file.close();
        }
};

int main() {
    FileOperation fo;

    fo.create_file("myfile.txt");
    fo.write_file("hello this data written by object of FileOperation class.");
    fo.read_file("myfile.txt");
}