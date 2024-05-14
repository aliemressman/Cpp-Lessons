#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        

    public: 
        string* name;
        int* salary;
        
        Employee(string n, int s) {
            name = new string;
            salary = new int;
            *name = n;
            *salary = s;
        }
        ~Employee() {
            delete name;
            delete salary;
        }
        void showInfo() {
            cout << "Name: " <<*name << endl;
            cout << "Salary: " <<*salary << endl;
        }
};
int main() {
    Employee* em = new Employee("Ali Emre", 1555);
    em -> showInfo();
    delete em;
    
   return 0; 
}