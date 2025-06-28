#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// FileManager class definition
class FileManager {
public:
    // Method to read data from a file
    void readFile(const string& fileName) {
        ifstream file(fileName); // Try to open the file

        // Check if file is not opened
        if (!file.is_open()) {
            cerr << "Error: Could not open the file: " << fileName << endl;
            return; // Exit the function
        }

        string line;
        cout << "File content:\n";
        while (getline(file, line)) {
            cout << line << endl; // Print each line
        }

        file.close(); // Close the file
    }
};

// Main function to demonstrate reading from a file
int main() {
    FileManager myFileManager;

    string fileName;
    cout << "Enter file name to read: ";
    cin >> fileName;

    myFileManager.readFile(fileName); // Call method to read file

    return 0;
}
