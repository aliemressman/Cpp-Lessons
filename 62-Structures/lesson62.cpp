#include <iostream>
using namespace std;

struct Car {
    string carName;
    int carAge;
    string carModel;
};

int main() {
    Car car1 = {"Bmw", 25, "X5"};
    Car car2 = {"Porsh", 5, "Taycan"};

    cout << car1.carName << endl;
    cout << car1.carAge << endl;
    cout << car1.carModel << endl;
    
    cout << "--------------------------" << endl;
    
    cout << car2.carName << endl;
    cout << car2.carAge << endl;
    cout << car2.carModel << endl;

  return 0;   
}