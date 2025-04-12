#include <iostream>
#include<string>
using namespace std;
class employee {
    protected:
    string name;
    int salary;
    employee(string n,int s){
        name=n;
        salary=s;
        cout<<"the name of the employee  is : "<<name<<endl;
        cout<<"the salary of the employee is : "<<salary<<endl;
    }
};
class manager: public employee{
    protected:
    string department;
    public:
    manager(string n,int s,string d):employee(n,s){
        department=d;
        cout<<"the department is : "<<department;
        
    }
    
};
int main(){
    manager mr("hunain",50000,"forest");
}