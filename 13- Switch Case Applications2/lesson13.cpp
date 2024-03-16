#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout<<"Pozitif Bir sayi giriniz:"<<endl;
    cin>>sayi;

    if(sayi <= 0){
        cout<<"Lutfen pozitif deger giriniz.";
    }
    else {
        switch(sayi % 2){
           case 0: cout<<"Degeriniz cift sayidir.";
           break;

            case 1: cout<<"Degeriniz tek sayidir.";
            break; 
    }
  }
  return 0;
}