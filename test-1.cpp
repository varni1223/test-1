#include <iostream>
using namespace std;

// Define the Book class
class Book {
public:
    string title;
    string author;
    int publishedYear;

    // Constructor
    Book(string t, string a, int y) {
        title = t;
        author = a;
        publishedYear = y;
    }

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
    }
};

int main() {
    // Create an array of Book objects
    Book books[3] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925),
        Book("To Kill a Mockingbird", "Harper Lee", 1960),
        Book("1984", "George Orwell", 1949)
    };

    // Access and display attributes
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].display();
        cout << endl;
    }

    return 0;
}
/*
output:
Book 1:
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Published Year: 1925

Book 2:
Title: To Kill a Mockingbird
Author: Harper Lee
Published Year: 1960

Book 3:
Title: 1984
Author: George Orwell
Published Year: 1949
 */   
