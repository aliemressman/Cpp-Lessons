#include <iostream>
#include <string>
using namespace std;

namespace programming1 {
    int x = 10; // global
    void myFunction() {
        int x = 7;
        cout << "x: "<< x << endl;
    }
    class Animal {
        public:
        int y = 25;
    };
}

namespace programming2 {
    int x = 11; // global
    void myFunction() {
        int x = 22;
        cout << "x: "<< x << endl;
    }
    class Animal {
        public:
        int y = 45;
    };
}

using namespace programming1;
int main() {

    cout << "x:" << x <<endl;
    programming1::myFunction();
    cout << "x : " << programming2::x << endl;
    programming2::myFunction();
    programming1::Animal obj2;
    cout << "y : " << obj2.y ;
}
