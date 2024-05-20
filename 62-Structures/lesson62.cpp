#include <iostream>
using namespace std;

struct Car {
    string carName;
    int carAge;
    string carModel;
};

int main() {
    Car car1 = {"Bmw", 25, "X5"};
    
    Car* ptr = &car1;

    cout <<  ptr->carName << endl;
    cout << ptr->carAge << endl;
    cout << ptr->carModel << endl;

  return 0;   
}