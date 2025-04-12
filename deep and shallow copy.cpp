#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    // Constructor
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Shallow Copy Constructor
    Person(const Person& other, bool shallow) {
        if (shallow) {
            // Just copy the pointer (shallow copy)
            name = other.name;
        } else {
            // Deep copy (copy data)
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }
    }

    // Deep Copy Constructor (default)
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    // Assignment Operator (Deep Copy)
    Person& operator=(const Person& other) {
        if (this != &other) {
            delete[] name;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }
        return *this;
    }

    // Setter
    void setName(const char* newName) {
        delete[] name;
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    // Getter
    void printName() const {
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Person() {
        delete[] name;
    }
};

int main() {
    cout << "Original Person:\n";
}