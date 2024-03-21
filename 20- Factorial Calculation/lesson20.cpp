#include <iostream>
using namespace std;

int main() {

    int number,i,faktoriyel = 1;

    cout <<"0'dan buyuk bir deger giriniz: ";
    cin >> number;

    if(number < 0)
        cout <<"Lutfen gecerli bir deger giriniz! ";
    else{
        for(i = number; i >= 1; i-- ){
            faktoriyel *= i;
        }
        cout << number <<"! = " << faktoriyel;
    }
    return 0;
}