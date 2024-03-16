#include <iostream>
using namespace std;

int main(){

    int number1, number2;
    cout<<"Enter the number";
    cin>>number1;

    cout<<"Enter the number";
    cin>>number2;

    if(number1 > number2){
        cout<<"number1 > number2\n";
        cout<<"Toplam degerleri: "<< number1 + number2;
    }
    else if(number1 == number2){
        cout<<"number1 == number2 \n";
        cout<<"carpim degerleri : "<< number1 * number2;
    }
    else{
        cout<<"number1 < number2\n";
        cout<<"Bolumunden kalan degerleri : "<< number2 % number1;
    }

    return 0;
}