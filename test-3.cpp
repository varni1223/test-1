#include <iostream>
using namespace std;

// Base class
class Animal {
private:
    string name;
    string sound;

public:
    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setSound(string s) {
        sound = s;
    }

    // Getter methods
    string getName() {
        return name;
    }

    string getSound() {
        return sound;
    }

    // Function to make sound (will be overridden)
    void makeSound() {
        cout << name << " makes a sound: " << sound << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void bark() {
        setSound("Woof!");
        cout << getName() << " says: " << getSound() << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void meow() {
        setSound("Meow!");
        cout << getName() << " says: " << getSound() << endl;
    }
};

int main() {
    // Create Dog object
    Dog dog;
    dog.setName("Buddy");
    dog.bark();  // Abstraction: just calling bark()

    // Create Cat object
    Cat cat;
    cat.setName("Whiskers");
    cat.meow();  // Abstraction: just calling meow()

    return 0;
}
/*
output:
Buddy says: Woof!
Whiskers says: Meow!
   */ 
