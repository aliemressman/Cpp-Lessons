#include <iostream>
using namespace std;

int main(){
    int pcBilesenleri;
    cout<<"Almak istediginiz parca :";
    cin>>pcBilesenleri;

    switch(pcBilesenleri){

        case 1: cout<<"SSD "<<endl;
        
        case 2: cout<<"Ekran Karti"<<endl;
       
        case 3: cout<<"Islmeci"<<endl;
       
        case 4: cout<<"Ram"<<endl;
       
        case 5: cout<<"Sogutucu"<<endl;
       
        default: cout<<"Dogru deger giriniz.";
    }
    return 0;
}