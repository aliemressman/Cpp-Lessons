#include <iostream>
using namespace std;

int main() {

    string carNames[5] = {"Mercedes","Bmw","Volvo","Fiat","Reno"};
    int carLenght = sizeof(carNames)/ sizeof(string);

    for(int i = 0; i < carLenght; i++)
    cout << carNames[i] << endl;
}