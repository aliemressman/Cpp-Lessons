#include <iostream>
#include <string>
using namespace std;

class Father {
    public:
        void myMethod() {
            cout<<"This is unbelievable!\n";
        }
};

class Son : public Father {
    protected:
        int number = 7;
};

class GrandChild : public Son {
    private:
        string name = "Ali Emre Şişman";
    public:
        int getValue() {
            return number * 4;
        }    
};

int main() {
    GrandChild myObj;
    myObj.myMethod();
    cout << myObj.getValue() ;
    return 0;
}