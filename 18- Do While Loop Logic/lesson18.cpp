#include <iostream>
using namespace std;

int main() {
    short int number, i = 1;
    do {
        i = 1;
       cout<<"bir sayi gir : \n";
     cin>>number;
     if (number > 50 || number < 1) 
     cout<<"Gecersiz sayi girdiniz!!";
        break;
        while(i <= number){
        cout<<i<<"\n";
        i++;
       }
       cout<<"\n";
  } while (number > 1 && number < 50);
    return 0;
}