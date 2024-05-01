#include <iostream>
using namespace std;

int main() {

    int numbers[7];
    cout << "Enter the number:";
    for(int i = 0; i < 7; i++){
        cin >> numbers[i];
    }

    cout << "\nOrjinal deger:";
    for(int i = 0; i < 7; i++){
        cout<< numbers[i]<< " ";
    }

    cout << "\nTers deger: ";
    for(int i = 0; i < 7; i++){
        cout << numbers[7-i]<< " ";
    }
}