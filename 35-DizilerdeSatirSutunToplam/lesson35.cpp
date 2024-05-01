#include <iostream>
using namespace std;

int main() {
    int matrix[3][4], i,j;
    int sum =0;
    for(i = 0 ; i < 3; i++){
        for(j = 0; j < 4; j++){
            matrix[i][j] = i + j;
        }
    }

     for(i = 0 ; i < 3; i++){
        for(j = 0; j < 4; j++){
            cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
     for(i = 0 ; i < 3; i++){
        cout << i+1 << ". row sum: ";
        for(j = 0; j < 4; j++){
            sum += matrix[i][j];
        }
        cout << sum<< endl;
        sum = 0;
    }
     cout << endl;
     for(i = 0 ; i < 4; i++){
        cout << i+1 << ". column sum: ";
        for(j = 0; j < 3; j++){
            sum += matrix[j][i];
        }
        cout << sum<< endl;
        sum = 0;
    }
}