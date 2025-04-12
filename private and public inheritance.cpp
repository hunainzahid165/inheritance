#include <iostream>
#include<string>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
		person(string n,int a){
			name=n;
			age=a;
			cout<<"the name of the student is : "<<name<<endl;
			cout<<"the age of the student is : "<<age<<endl;
		}
};
class student:public person{
	private:
		char grade;
		public:
			student(string n,int a,char g):person(n,a){
				grade=g;
				cout<<"the grade of the student is : "<<grade;	
			}
			
			};
			int main(){
				student st("hunain",18,'A');
			}