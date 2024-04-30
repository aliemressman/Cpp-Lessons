#include <iostream>
using namespace std;

int main() {

    string Bottle[3] = {"Damla", "Erikli","Nevsehir"};
    int myNumber[5] = {5,9,8,4,15};

    for(int i = 0; i < 5; i++){
        cout << i << ".Number = " << myNumber[i]<< endl;
    }

    // For each kullanimi:
    for(string j : Bottle)
        cout<<j<<"\n";
}