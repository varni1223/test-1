#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload - operator
    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "j" << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(4, 7);
    Complex c2(2, 3);

    // Subtract using overloaded - operator
    Complex result = c1 - c2;

    // Display result
    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Result after subtraction: ";
    result.display();

    return 0;
}
/*
output:
First Complex Number: 4 + 7j
Second Complex Number: 2 + 3j
Result after subtraction: 2 + 4j
    */
