#include <iostream>
using namespace std;

class car {
private:
 string model;
 int year;
 public:
 car(string m,int y){
     model=m;
     year=y;
 }
 void show(){
     cout<<"the model of the car is "<<model;
     cout<<" and the year of manufacturing is "<<year<<endl;
     
 }
 ~car(){
     cout<<"object is destroyed"<<endl;
 }
};
 int main(){
     car c1("honda",2023);
    car c2("corolla",2024);
    c1.show();
    c2.show();
    
    
 }