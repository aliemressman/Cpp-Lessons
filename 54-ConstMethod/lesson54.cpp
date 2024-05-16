#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int salary;
    public:
        void setSalary(int s) {
            salary = s;
        }   

        int getSalary() const {
            return salary;
        } 
};

int main() {
    Employee em;
    em.setSalary(9000);
    cout << em.getSalary();

    return 0;
}