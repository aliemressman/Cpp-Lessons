#include <iostream>
using std::cout;

int main() {
    int x = 5; /* BU KULLANIM STACKTE TUTULMASINI SAĞLAR.
    VE PROGRAM BOYUNCA(DERLEYİCİ ÇALIŞIR DURUMDAYKEN) RAMİ
    İŞGAL EDER.
*/

    int* y = new int;
    *y = 4;
    cout << *y*2 ;  // BUNU KULLANIMLADA HEAPTE BELLEK TAHSİS EDERİZ.
    delete y;

    return 0;
}