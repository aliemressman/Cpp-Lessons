#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        int year;
        string model;
        string brand;
        Car(int y, string m, string b){
            year = y;
            model = m;
            brand = b;
        }
};

int main() {
    Car c1 (15,"Tofask","Tofas");

    Car c2 (55, "fs","bmw");

    cout <<" "<<c1.year << " " << c1.brand << " " << c1.model;
    return 0;
}