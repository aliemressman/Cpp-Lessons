#include <iostream> 
using namespace std;

void myArray(int* numbers, int mySize);

int main() {
    int numbers[5] = {55,6,84,9,1}; 
    int arraySize = sizeof(numbers)/sizeof(numbers[2]);
        cout << "Degismeden once"<< endl;
        cout << "-----------" << endl;
        for(int i= 0; i < arraySize; i++){
            cout << "numbers ["<<i<<"] =" <<* (numbers+i) << endl;
            myArray(numbers,arraySize);

            cout << endl << "Degistikten sonra: " << endl;
            cout << "----------";
            for(int i = 0; i < arraySize; i++){
                cout << "numbers ["<<i<<"] =" <<* (numbers+i) << endl;
                return 0;
            }
        }
}


void myArray(int* numbers, int mySize){
    for(int i = 0; i < mySize; i++){
        *(numbers + i) *= 4;
    }
}