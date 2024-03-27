#include <iostream>
using namespace std;

void print(string fname, char letter, char myPlus);
/*
Kod yukardan aşağı doğru okunduğu için main in altında tanımladığımız
bir fonksiyonu yukarda imzasını atmamız gerekiyor.
*/
 

int main() {
    print("Ali",'C','+');
    print("Mehmet",'C','+' );
    print("Busra",'C','+');

    cout << "\n";
    return 0;
}

void print(string fname, char letter, char myPlus){
    cout << "Hello " << fname << " and " << letter << myPlus << "" << myPlus<< "\n"; 
}