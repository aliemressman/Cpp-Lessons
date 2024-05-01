#include <iostream>
using namespace std;

void sortIt();
void showArray();
void showArrayReverse();

int number[7],i;

int main() {
    cout << "Enter the array numbers: ";
    for(i=0; i<7;i++)
    cin >> number[i];
    cout<< "\nBefore sorting\n";
    showArray();
    cout << "\n\nThe array is sorting...\n";
    sortIt();
    cout<<"\nAfter sorting\n";
    showArrayReverse();
    cout<<"\n";
    return 0;
}

void sortIt() {
    int j, reverse;
    for(i = 0; i<7; i++){
        for(j = i +1 ; j < 7;j++){
            if(number[j] < number[i]){
                reverse = number[i];
                number[i] = number[j];
                number[j] = reverse;
            }
        }
    }
}

void showArray(){
    for(i = 0; i < 7; i++){
        cout << number[i]<< " "; // Küçükten büyüğe
    }
}

void showArrayReverse(){
    for(i = 6; i >=0; i--){
        cout << number[i] << " "; // Büyükten Küçüğe
    }
}