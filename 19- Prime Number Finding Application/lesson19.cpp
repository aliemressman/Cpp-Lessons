#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Sayinin asal olup olmadigini anlamamiz icin sayinin 
    // yarisina bolup o degere kadarki sayilarla bolup kontrol edebiliriz.

    int number, result;
    string control;

    cout << "Bir deger giriniz: ";
    cin >> number;
    result = (sqrt(number));

    for(int i = 2; i <= result; i++){
       if(number % i == 0){
            control = "asaldir";
               break;
       }
    } 
     if(control == "asaldir"){
            cout << "Sayi asal degildir.";
        }
        else{
            cout << "Sayi asaldir.";
        }
}