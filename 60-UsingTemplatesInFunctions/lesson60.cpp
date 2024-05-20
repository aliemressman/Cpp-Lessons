#include <iostream>
using namespace std;

template <typename T> // Şablonu birden fazla veri tipini kullanmak istediğimizde kullanırız.
void Replace(T&x, T&y) { // return etmediğimiz yerlerde değişkenin referansını yollarız.
    T z = x;
    x = y;
    y = z;
}


int main() {
    int x = 15;
    int y = 11;
    cout << x << "\t" << y << endl;
    Replace(x,y);
    cout << x << "\t" << y << endl;
    cout << "----------------------------" << endl;
    char letter1 = 'x';
    char letter2 = 'a';
    cout << letter1 << "\t" << letter2 << endl;
    Replace(letter1,letter2);
    cout << letter1 << "\t" << letter2 << endl;
    cout << "----------------------------" << endl;
    double a = 11.5;
    double b = 25.9;
    cout << a << "\t" << b << endl;
    Replace(a,b);
    cout << a << "\t" << b << endl;
    cout << "----------------------------" << endl;
}