#include <iostream>
using namespace std;

class employee {
private:
    int id;
    const int salary;  // const member

public:
    // Use member initializer list to initialize const salary
    employee(int i, int s) : id(i), salary(s) {
        cout << "Employee Object Address (this): " << this << endl;
        cout << "Employee ID: " << this->id << endl;
        cout << "Employee Salary: $" << this->salary << endl;
    }
};

int main() {
    employee e1(101, 50000);
    employee e2(102, 50000);
    return 0;
}
