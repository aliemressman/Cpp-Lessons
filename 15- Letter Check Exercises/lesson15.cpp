#include <iostream>
using namespace std;

int main() {
    char myCharacter;

    cout<<"Enter a Character: ";
    cin>> myCharacter;

    if (myCharacter >= 'A' && myCharacter <= 'Z') {
        cout<<myCharacter<<"is a Uppercase letter";
    }
    else if (myCharacter >= 'a' && myCharacter <= 'z'){
        cout<<myCharacter<<"is a lower case letter";
    }
    else{
        cout<<myCharacter<<"is a not letter";
    }
}