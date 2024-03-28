#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main(){
    
    setlocale(LC_ALL,"Turkish");
    string fullName;
    cout << "Enter your full name";
    getline(cin,fullName);
    if (fullName.length() <= 5) {
        cout << " 5 karakterden uzun deger giriniz. " << endl;
        cout << "the lenght : " << fullName.length() ;
    }
    else {
        cout << " Isminizin uzunlugu : " << fullName.length();
    }
    return 0;
}