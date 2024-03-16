#include <iostream>
using namespace std;

int main(){
    char operators;
    float x,y;

    cout << "Islemlerimiz + , - , * , / ";
    cin >> operators;

    cout <<"Iki adet sayi giriniz";
    cin >> x >> y;

    switch (operators)
    {
    case '+' : cout<<"X + Y =" << x + y ; 
        break;
    
    case '-' : cout<<"X - Y =" << x - y ; 
        break;

    case '*' : cout<<"X * Y =" << x * y ; 
        break;
    
    case '/' : cout<<"X / Y =" << x / y ; 
        break;

    default:
        break;
    }
}