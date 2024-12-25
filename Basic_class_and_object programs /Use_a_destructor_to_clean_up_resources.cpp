#include<iostream>
using namespace std;

class FileHandler {
private:
    FILE *file;

public:
    FileHandler(const char *fileName, const char *mode) {
        file = fopen(fileName, mode);
        if (file) {
            cout << "File Opened Successfully: " << fileName << endl;
        } else {
            cout << "Failed to open file: " << fileName << endl;
        }
    }

    ~FileHandler() {
        if (file) {
            fclose(file);
            cout << "File closed successfully." << endl;
        }
    }

    void writeData(const char *data) {
        if (file) {
            fputs(data, file);
            cout << "Data written to the file." << endl;
        } else {
            cout << "File not open. Cannot write data." << endl;
        }
    }
};

int main() {
    {
        FileHandler fh("example.txt", "w");

        fh.writeData("Hello, World!");
    }
    cout << "Program ended." << endl;

    return 0;
}