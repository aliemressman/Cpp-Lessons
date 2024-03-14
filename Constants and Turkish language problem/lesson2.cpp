#include <iostream>
#include <clocale>

using namespace std;

int main(){
    
    setlocale(LC_ALL,"Turkish");
    cout<<"Çarşı pazar karıştı\n";
    
    cout<<"---------------------------------\n";

    /*const int x;
    x = 15;     böyle bir kullanım yoktur. */  

    const int x = 15; // değişmeyen değer.
    const float PI = 3.14;
    cout<<"Pi degeri : "<<PI;

    cout<<"---------------------------------\n";

    unsigned int unsignedNumber = -7; // unsigned sadece pozitif değerleri yazdırır.
    cout<<unsignedNumber<<"\n"; 

    signed int signedNumber = -7; // signed ile negatif değerleride yazdırabiliriz.
    cout<<signedNumber<<"\n"; 

    cout<<"---------------------------------\n";

    float sayi = 3.55;
    
    sayi = static_cast<int>(sayi); // static_cast <type> kodu ile tür değişimleri yapabiliriz.
    cout<<sayi<<"\n";

    return 0;
}