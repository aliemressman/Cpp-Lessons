#include <iostream>
#include <string>
using namespace std;

template<class T> // Şablona class verdik.
class Employee { // Şablonumuzun altına yazıyoruz.
    public:
        T myVariable;
        Employee(T x) {
            myVariable = x;
        }
};  


int main() {
    Employee<int> myObj(5);
    Employee<string> myObj2("ahaha");
    Employee<double> myObj3(22.8);

    cout << myObj.myVariable << endl;
    cout << myObj2.myVariable << endl;
    cout << myObj3.myVariable << endl;
   return 0;
}