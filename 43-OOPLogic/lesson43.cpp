#include <iostream>
#include <string>
using namespace std;

class Car {
    public: 
    int weight; // variable yerine -> attribute
    string carName;
    int carAge;

    void drive(){ // fonksiyon yerine -> Metod
    }

    void wish();

    int speed(int maxSpeed){
        return maxSpeed * 2 ;
    }
};

void Car::wish() {
    cout << "Hello c++\n"; // En dışarda tanımlarsak Class içerrisinde imzasını atmamız lazım.
}

int main() {
    Car Bmw;
    Bmw.weight = 500;
    Bmw.carName = "Bmw";
    Bmw.carAge = 19;

    cout << "Speed: " << Bmw.speed(200) << endl;
    cout << "Weight: " << Bmw.weight << endl;
    cout << "Name: " << Bmw.carName << endl;
    cout << "Age: " << Bmw.carAge << endl;

    Car Merco;
    Merco.weight = 500;
    Merco.carName = "Bmw";
    Merco.carAge = 19;
    
    Merco.wish();
    cout << "Weight: " << Merco.weight << endl;
    cout << "Name: " << Merco.carName << endl;
    cout << "Age: " << Merco.carAge << endl;
}