#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    // Parameterized constructor
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
    string getAddress() { return address; }

    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(string addr) { address = addr; }

    // Display method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    int N;
    cout << "Enter number of persons: ";
    cin >> N;

    // Array of objects
    Person* people[N];

    // Input details
    for (int i = 0; i < N; i++) {
        string name, address;
        int age;

        cout << "\nEnter details for person " << i + 1 << ":\n";
        cin.ignore(); // clear input buffer
        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore(); // clear input buffer

        cout << "Address: ";
        getline(cin, address);

        // Create object using constructor
        people[i] = new Person(name, age, address);
    }

    // Display all details
    cout << "\n--- Person Details ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nPerson " << i + 1 << ":\n";
        people[i]->display();
        delete people[i]; // free memory
    }

    return 0;
}
