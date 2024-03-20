#include <iostream>
using namespace std;

int main() {
    short int number;
    short int i = 1;

    while(number != 0){
        i = 1;
        cout<<"(1-10) arasinda bir sayi giriniz: (0 = Exit)\n";
        cin>>number;
        if(number < 0 || number > 10){
            cout<<"Lütfen dogru aralikta bir sayi giriniz.";
        }
         else{
            while(i <= 10 && number != 0) {
                cout<<number <<"X" <<i <<"=" <<number * i<<"\n";
                i++;
            }
         }
    }
    return 0;
}