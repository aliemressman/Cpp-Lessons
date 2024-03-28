#include <iostream>
#include <string>
using namespace std;

int sum (int,int);
double sum(double,double);

int main() {
    int x = sum(5,6);
    double y = sum(5.6 , 7.6);
    cout << " x degerlerimiz : " << x << endl;
    cout << " y degerlerimiz : " << y << endl;

    return 0;
}

inline int sum(int x, int y) {
    return x + y;
}

inline double sum(double x, double y) {
    return x + y;
}