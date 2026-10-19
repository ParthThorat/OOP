#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sourcePath, destPath;

    cout << "Enter source file name: ";
    cin >> sourcePath;
    cout << "Enter destination file name: ";
    cin >> destPath;

    ifstream sourceFile(sourcePath, ios::binary);
    if (!sourceFile.is_open()) {
        cout << "Error: Could not open source file!" << endl;
        return 1;
    }

    ofstream destFile(destPath, ios::binary);
    if (!destFile.is_open()) {
        cout << "Error: Could not open destination file!" << endl;
        sourceFile.close();
        return 1;
    }

    destFile << sourceFile.rdbuf();

    sourceFile.close();
    destFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}
