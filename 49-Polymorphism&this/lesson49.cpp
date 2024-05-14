#include <iostream>
#include <string>
using namespace std;

class Employee {
    private: 
        string name;
        int salary;

    public:

        Employee(string name, int salary) {
            this->name = name;
            this->salary = salary;
        }
        void setName(string name){
            this->name = name;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        int getSalary() {
            return salary;
        }
        string getName() {
            return name;
        }
};

int main() {
    Employee em;

    em.setName("Ali Emre Sisman");
    em.setSalary(2500);
    cout << "Name: "<< em.getName() << endl;
    cout << "Salary: "<< em.getSalary();

}