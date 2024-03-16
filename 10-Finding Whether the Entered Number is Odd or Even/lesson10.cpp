#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Please enter the number";
    cin>>number;

    if(number > 0){
        if(number % 2 == 0){
            cout<<"Number is even";
        }
        else{
            cout<<"Number is odd";
        }
    }
    else{
        cout<<"Please enter the number again :";
        cin>>number;
    }

}