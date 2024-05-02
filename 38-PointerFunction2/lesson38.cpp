#include <iostream> 
using namespace std;

int carpmaIslemi(int x,int y){
    return x * y;
}

int toplamaIslemi(int x, int y){
    return x + y ;
}

int main() {
    int (*fun)(int,int);
    fun = carpmaIslemi;
    cout << "x * y = " << fun(15,8) << endl;
    fun = &toplamaIslemi;
    cout << " x + y = "<< (*fun)(15,8) << endl;
    return 0;
}