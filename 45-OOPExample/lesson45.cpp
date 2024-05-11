#include <iostream>
#include <string>
using namespace std;

class MathOperations {
    public:
    int number1, number2;
    MathOperations(int x, int y){
        number1 = x;
        number2 = y;
    }

    int addition() {
        return number1 + number2;
    }
    int subtraction() {
        return number1 - number2;
    }
    int multiplication() {
        return number1 * number2;
    }
    int division() {
        return number1 / number2;
    }
    int modules() {
        return number1 % number2;
    }
    void getData() {
        cout << addition() << endl;
        cout << subtraction() << endl;
        cout << multiplication() << endl;
        cout << division() << endl;
        cout << modules() << endl; 
    }
};

int main() {
    MathOperations myObj(15,20);
    myObj.getData();

    MathOperations myObj2(55,14);
    myObj2.getData();

    return 0 ;
}