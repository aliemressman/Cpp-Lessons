#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        static int workers;
        Employee() {
            workers++; // Bu nesneyi her oluşturduğumda 1 arttır.
        }

        static void showInfo(string n, int s) {
            cout << "the name of workes is " << n << endl;
            cout << "the salary of workes is " << s << endl; 
        }   
};
int Employee::workers = 0; // Class ve main dışında workers'ı int olarak tanımladık.
int main() {
    Employee em1, em2, em3;
    cout << "Number of workers is " << Employee::workers << endl;

    Employee::showInfo("Ali Emre", 200000); 
    return 0;
}