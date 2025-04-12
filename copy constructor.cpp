#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy constructor
    Rectangle(const Rectangle& r) {
        length = r.length;
        breadth = r.breadth;
        cout << "Copy constructor called." << endl;
    }

    // Function to display dimensions
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);   // Create first rectangle
    Rectangle rect2 = rect1;  // Copy constructor is invoked

    cout << "Rectangle 1: ";
    rect1.display();

    cout << "Rectangle 2 (copied): ";
    rect2.display();

    return 0;
}
