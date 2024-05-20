#include <iostream>
#include <string>
using namespace std;

struct Address {
    string cityName;
    string district;
    int no;
};
struct Employee {
    string name;
    string lastName;
    int workerNo;
    Address add;
};

int main() {
    Employee em = {"Ali", "Sisman", 15, "Istanbul", "Hah", 1555};
    cout << "Name: " << em.name << endl;
    cout << "LastName: " << em.lastName << endl;
    cout << "No: " << em.workerNo << endl;
    cout << "CityName: " << em.add.cityName << endl;
    cout << "District: " << em.add.district << endl;
    cout << "No: " << em.add.no << endl << endl;

  return 0;
}