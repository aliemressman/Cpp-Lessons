#include <iostream>
using namespace std;

void showMe(void* ptr, char type);

int main() {
    int number = 45;
    float number2 = 3.14;
    double number3 = 56.881;
    char letter = 'x';
    showMe(&number, 'i');
    showMe(&number2, 'f');
    showMe(&number3, 'd');
    showMe(&letter, 'c');
    return 0;
}

void showMe(void* ptr, char type){
    switch (type)
    {
    case 'i' : cout <<* ((int*)ptr) << endl ; break;
    case 'c' : cout <<* ((char*)ptr) << endl ; break;
    case 'f' : cout <<* ((float*)ptr) << endl ; break;
    case 'd' : cout <<* ((double*)ptr) << endl ; break;
        }
}