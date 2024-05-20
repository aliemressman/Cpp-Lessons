#include <iostream> 
#include <string>
using namespace std;

struct Employee {
    string name;
    string lastName;
    int workerNo;
};

int main() {
    Employee myWorker[] = {"Ali","Sisman",555,"Busra","Surum",655,"Mehmet","Simsek",98};
    for(int i = 0; i < 3; i++) {
        cout << "Name: " << myWorker[i].name << endl;
        cout << "LastName : " << myWorker[i].lastName << endl;
        cout << "WorkerNo : " << myWorker [i].workerNo << endl;
        cout << "-------------------------------------" << endl;
    }
    return 0;
}