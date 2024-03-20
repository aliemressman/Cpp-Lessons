#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number , result ;

    cout<<"Enter the positive number: ";
    cin>>number;

    if(number < 0 ) {
        cout<<"Please dont enter a negative or zero\n";
    }
    else {
        result = sqrt(number);
        result *= result;
        if (result == number) {
            cout<<"square root of "<<number<<" is an integer\n";
        }
        else{
            cout<<"The number entered is not an square number \n";
        }
    }
    return 0;
}