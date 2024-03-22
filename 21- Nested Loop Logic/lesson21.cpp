#include <iostream>
using namespace std;

int main() {

    int i,j,satirSayisi,sutunSayisi;

    cout << "Satir sayisini giriniz : ";
    cin >> satirSayisi;
    cout << "Sutun sayisini giriniz : ";
    cin >> sutunSayisi;

    for (i = 1; i <= satirSayisi; i++) {
        for (j = 1; j < sutunSayisi; j++) {
            cout << "Dersimize Hosgeldiniz";
            if (j != satirSayisi) {
                cout << "-";
            }
        }
        cout << "\n--------------------------\n";
    }
    return 0;
}