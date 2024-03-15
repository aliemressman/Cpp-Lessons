#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 3;

    cout<<(x == y)<<"\n"; // false
    cout<<(x != y)<<"\n"; // true
    cout<<(x < y)<<"\n"; // false
    cout<<(x > y)<<"\n"; // true
    cout<<(x <= y)<<"\n"; // false
    cout<<(x >= y)<<"\n"; // true

    cout<<(x > 2 && y < 7)<<"\n"; // true
    cout<<(x < 3 || y < 55)<<"\n"; // true
    cout<<(!(x < 3 || y < 55))<<"\n"; // false

    return 0;
}