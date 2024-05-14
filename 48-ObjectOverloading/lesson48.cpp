#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int salary;
        double code;

    public:
        Employee() {
            name = "Ali Emre";
            salary = 5000;
            code = 5,115;
        }
        Employee(int s) {
            name = "Mehmet Emre";
            salary = s;
            code = 5,115;
        }
        Employee(int s, double c) {
            name = "Ali Emre";
            salary = s;
            code = c;
        }
        Employee(int s, double c, string n) {
            name = n;
            salary = s;
            code = c;
        }

        void print() {
            cout << name << endl;
            cout << salary << endl;
            cout << code << endl;
            cout << "---------------------------------"<< endl;
        }
};

int main() {
    Employee em;
    Employee em2(5000);
    Employee em3(45111,18.56);
    Employee em4(1555,88.5, "SAA");

    em.print();
    em2.print();
    em3.print();
    em4.print();
    return 0;
}
