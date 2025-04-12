#include <iostream>
#include<string>
using namespace std;
class vehicle {
    public:
    void startEngine(){
        cout<<"starting vehicle engine\n";
    }
    };
    class airplane:public vehicle {
        public:
        void startEngine(){
        cout<<"starting jet engine\n";
    }
    };
    int main(){
        airplane jet;
        vehicle v;
        v.startEngine();
        jet.startEngine();
        
    }
    
    