#include <iostream>
#include <istream>
using namespace std;

int main(){
    const float PI = 3.14;
    float cevre, alan, r ;

    cout<<"enter the number:";
    cin>>r;

    cevre = 2 * PI * r ;
    alan  = PI * r * r;
    cout<<"cevrenizin degeri :"<<cevre<<"\n";
    cout<<"alaninizin degeri :"<<alan<<"\n";

    cout<<"-------------------------------------------\n";

    string myText;
    cout<<"Enter a message";
    getline(cin,myText);
    cout<<"Mesajiniz: "<<myText<<" dir\n";
    
    return 0;
}