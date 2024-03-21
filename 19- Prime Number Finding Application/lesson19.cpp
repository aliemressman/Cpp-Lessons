#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Sayinin asal olup olmadigini anlamamiz icin sayinin 
    // yarisina bolup o degere kadarki sayilarla bolup kontrol edebiliriz.

    int number, result, stop;
    int control = 1;

    do {
    cout << "\nBir deger giriniz:\n";
    cin >> number;
    if(number < 1) {
       cout<<"Lutfen yuksek degerde sayi giriniz.";
       continue;
    }
    if(number == 1)
        break;

    result = (sqrt(number));
    for(int i = 2; i <= result; i++){
       if(number % i == 0){
            control = 2;
            break;
        }else 
           control = 1; 
    } 
    if(control == 2)
        cout << "Sayi asal degildir.";
    else 
        cout << "Sayi asaldir.";

    }  while(number != 1);
      return 0;
}
