#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary) {
            this -> name = name;
            this -> salary = salary;
        }
      //  friend void Print(Employee.em);
        friend class Worker;
};

/*void Print(Employee em){
    cout << "Name : " << em.name << endl;
    cout << "Salary : " << em.salary << endl; 
}*/

class Worker {
    public: 
        void Print(Employee em){
        cout << "Name : " << em.name << endl;
        cout << "Salary : " << em.salary << endl; 
    }
};
int main() {
    Employee em("Ali Emre", 200000);
   // Print(em);
   Worker obj;
   obj.Print(em);

return 0;
}