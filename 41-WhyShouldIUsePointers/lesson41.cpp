#include <iostream>
using namespace std;

// MAİN İÇİNDE FAZLA DEĞİŞKEN OLUŞTURMAKTAN KURTULDUK.
void getMinMax(int numbers[], int mySize, int *minValue, int *maxValue);

int main() {
    int numbers[7] = {4,50,-55,60,84,56,1};
    int mySize = sizeof(numbers) / sizeof(numbers[0]);
    int minValue = numbers[0];
    int maxValue = numbers[0];
    getMinMax(numbers,mySize,&minValue,&maxValue);
    cout << "Min : " << minValue << endl;
    cout << "Max : " << maxValue << endl;   
    return 0;
}

void getMinMax(int numbers[], int mySize, int* minValue, int* maxValue) {
    for(int i = 1; i < mySize; i++){
        if(numbers[i] < *minValue){
            *minValue = numbers[i];
            }
    if(numbers[i] > *maxValue){
        *maxValue = numbers[i];
    }
  }
}