#include <iostream>
using namespace std;

int main() {
    double myValue,myNumbers[5] = {0,0,0,0,0};
    int index , choice;
    do{
    cout << "\t1. write to array \n";
    cout << "\t2. read from array \n";
    cin >> choice;
    if(choice == -1 )break;
    if(choice != 1 && choice !=2 ){
        cout << "are you kidding ? ";
        continue;
    }
  cout<< "Enter array index: ";
  cin >> index;
  if(index < 0 || index > 4){
    cout << "index must be in the range of 0-4\n";
    continue;
  }
    switch (choice)
    {
    case 1: cout << "Enter the value : ";
            cin >> myValue;
            myNumbers[index] = myValue;
            cout<<"write operation is succesful\n\n";
        break;
    case 2: cout << "myNumbers["<<index<<"]="<<myNumbers[index]<<"\n";    
     break;
    }
}while(choice!=-1);
return 0;
}