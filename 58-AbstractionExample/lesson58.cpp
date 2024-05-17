#include <iostream>
#include <string>
using namespace std;
#include "Header/human.h"
#include "Header/student.h"

int main() {
    Students st(34,"Ali Emre", "Sisman", 18);
    cout << "Student No: " << st.getStudentsNo() << endl;
    cout << "Name: " << st.getName() << endl;
    cout << "LastName: " << st.getLastName() << endl;
    cout << "Age: " << st.getAge() << endl;

  return 0 ;
}