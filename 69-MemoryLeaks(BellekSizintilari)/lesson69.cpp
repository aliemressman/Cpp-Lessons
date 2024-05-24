#include <iostream>
#include <string>
using namespace std;

class myMath{
    int* number1=nullptr;
    int* number2=nullptr;
    public:
    myMath(int x, int y){
        number1 = new int;
        number2 = new int;
        *number1 = x;
        *number2 = y;
        cout << *number1+*number2 << endl;
    }
    ~myMath() {
        delete number1;
        delete number2;
        cout << "Successful" << endl;
        // Bu kullanımı yapmazsak ptr adlı objeyi delete ettiğimiz zaman
        // Number1,2 adlı değişkenler hala memoryde kalmaya devam eder!
    }
};

int main() {
    myMath* ptr = new myMath(7,12);
    delete ptr;

    return 0;
}