#include <iostream>
#include<string>
using namespace std;
class shape {
    private:
    double area;
    protected:
   void calculateArea(double value ){
       area=value;
   } 
   public:
   void displayArea(){
      cout<<"the area is : "<<area; 
   }
};
   class circle:public shape{
       private:
       double radius;
       public:
       circle(double r){
           radius=r;
       calculateArea(3.14*radius*radius);
       }
       
       
   };
   int main(){
       circle c(5);
       c.displayArea();
   }