#include <iostream>
using namespace std;

int main() {
    char letter;
    cout<<"please enter the character";
    cin>>letter;

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o': cout<<letter<<"is a lowel \n"; 
        break;
        default : cout<<letter<<"is a consonant\n";
                  cout<<"or not a letter \n";

    }
}