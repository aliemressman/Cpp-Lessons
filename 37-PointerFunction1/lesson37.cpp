#include <iostream> 
using namespace std;

void numberDegis(int* ptr);

int main() {
    int x = 15;
    cout << "Degistirilmeden onceki deger : " << x << endl;
    numberDegis(&x);
    cout << "Degistikten sonraki deger : " << x << endl;

    return 0;
}

void numberDegis(int* ptr) {
    *ptr = 75;
    cout << "Yeni deger : " << *ptr << endl;
}