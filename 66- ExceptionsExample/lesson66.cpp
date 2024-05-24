#include <iostream> 
#include <string>
using namespace std;

int main() {
    try {
    int x,y;
    cout << "Enter the numberX = ";
    cin >> x;
    cout << "Enter the numberY = ";
    cin >> y;
    
    if(y == 0) {
        throw -1;
    }else
        cout << "X/Y degeri = " << x/y << endl;
    }catch(...){
        cout << "Warning!";
  }
  return 0;
}