#include <iostream>
#include <string>
using namespace std;

int main() {
    try
    {
        int age;
        cout << "Enter the Age:";
        cin >> age;
        if (age >= 18) {
            cout << "Access Granted : You are old young \n";
        }else{
            throw (age);
        }
    }
    catch(int err){
        cout << "Access Denied: You must be at least 18 years old.\n";
        cout << "Age : " << err; 
    }
    return 0;   
}