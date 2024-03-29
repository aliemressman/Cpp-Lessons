#include <iostream>
using namespace std;

int main() {
    int *ptr ;
    int size;

    cout << "Kac deger gireceksiniz : " << endl;
    cin >> size;

    ptr = new int [size];

    for (int i = 0; i < size; i++) {
        
        cout << "Deger : ";
        cin >> ptr[i];
    }

    for ( int i = 0; i < size; i++) 
    cout << "Eleman : " << ptr[i] << endl ;
    
    delete [] ptr;

    return 0;
}