#include <iostream>
#include <string>
using namespace std;

int main(){
  /*  char str1[10] = "Ali Emre";
    char str2[10] = "Sisman";
    char str3[10];
    int myLenght;

    strcpy(str3,str1);
    cout <<"strcpy(str3,str1) " << str3 << endl;
    strcat(str1,str2);
    cout <<"strcat(str1,str2) " << str1 << endl;
    myLenght = strlen(str1);
    cout <<"strlen(str1) = " << myLenght<<endl;
*/

    string str1 = "Ali Emre";
    string str2 = "Sisman";
    string str3 = "";
    int myLenght;
    str3 = str1.append(str2);
    cout << "str3 = " << str3 << endl;

    myLenght = str3.length();
    cout << "lenght = " << myLenght;
}