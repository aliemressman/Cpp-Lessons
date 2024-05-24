#include <iostream>
using namespace std;

class Employee {
        public:
            Employee() {
                cout << "Started\n";
            }
            ~Employee() {
                cout << "Deleted\n";
            }
    };

int main() {
    Employee* em = new Employee;
    cout << "Hello Dynamic Memory \n";
    delete em;
   return 0;
}