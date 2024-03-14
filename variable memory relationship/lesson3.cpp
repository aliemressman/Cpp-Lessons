#include <iostream>
using namespace std;

int main(){
    int myIntNumber =7;
    float myFloatNumber = 7.19;
    double myDoubleNumber = 2.59659956;
    bool myBoolNumber = false;
    char myCharacter ='\"'; // özel karakterleri kullanırken önüne \ getirilir.
    char x = 68, y = 69, z = 70; // ASCII Tablosunda karşılık gelen değeri yazdırcak.
    string myText = "Hello Guys";

    cout<< "int="<<myIntNumber<<"\n";
    cout<< "float="<<myFloatNumber<<"\n";
    cout<< "double="<<myDoubleNumber<<"\n";
    cout<< "bool="<<myBoolNumber<<"\n";
    cout<< "char="<<myCharacter<<"\n";
    cout<< "char="<<x<<y<<z<<"\n";
    cout<< "String="<<myText<<"\n";

    return 0;
}