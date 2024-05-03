#include <iostream>
using namespace std;

int main() {
    int sizeArray;
    cout << "Enter the size ";
    cin >> sizeArray;
    int* myArray = new int[sizeArray];

    for(int i = 0; i < sizeArray; i++){
        cout << "myArray["<<i<<"]";
        cin >> myArray[i];
    }

    for(int i = 0; i < sizeArray; i++)
    cout << * (myArray+i) <<" ";

    delete[]myArray;
    myArray = NULL;
   return 0; 
}