#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int salary;
        string ePosta;
        
    public:
        void setSalary(int s){
            salary = s;
        }    

        int getSalary() {
            return salary;
        }

        void setEposta(string ePost){
            ePosta = ePost;
        }

        string getEposta() {
            return ePosta;
        }
};

int main() {
    Employee em;

    em.setEposta("aliemresisman2005@gmail.com");
    cout << "E-postaniz = " << em.getEposta() << endl;
    
    em.setSalary(2500);
    cout << "Sifreniz = " << em.getSalary();

    return 0;
}