#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "keskek";
    string* ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "Dondurma";
    cout << food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}