#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book object destroyed." << endl;
    }
};

int main() {
    
    Book* bookPtr = new Book("history", "hunain");

    
    bookPtr->display();

    
    delete bookPtr;

    return 0;
}
