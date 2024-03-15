#include <iostream>
using namespace std;

int main(){
    int toplama, cikarma, bolme, carpma;
    int sayi1 = 55 , sayi2 = 32;

    toplama = sayi1 + sayi2;
    cikarma = sayi1 - sayi2;
    bolme = sayi1 / sayi2;
    carpma = sayi1 * sayi2;

    cout<<"toplam = "<<toplama<<"\n";
    cout<<"cikarma = "<<cikarma<<"\n";
    cout<<"carpma = "<<carpma<<"\n";
    cout<<"bolme = "<<bolme<<"\n";

    cout<<"-------------------------------------\n";

    int x = 15, y = 17, z = 8;
    int a;

    x++;
    a= --y % x ;
    cout<<"a degeri:"<<a<<"\n";

    z = ++z;
    cout<<z;
    return 0;
}