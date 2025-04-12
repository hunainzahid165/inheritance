#include <iostream>
using namespace std;
class employee{
    private:
    static int count;
    public:
    employee(){
        count++;
    }
    static void show(){
        cout<<"the total number of employee is: "<<count;
    }
};
int employee::count=0;
int main(){
  employee e1,e2,e3;
  employee::show();
}

