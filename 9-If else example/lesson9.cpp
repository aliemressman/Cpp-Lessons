#include <iostream>
using namespace std;

int main(){
    int myNot;

    cout<<"Lutfen myNotunuzu giriniz : \n";
    cin>>myNot;

    if(myNot>=85 && myNot<=100){
        cout<<"myNotunuz:"<<myNot<<endl;
        cout<<" myNotunuz AA'dır.";
    }
    else if(myNot>=60 && myNot<85){
        cout<<"myNotunuz:"<<myNot<<endl;
        cout<<"myNotunuz BB'dir.";
    }
    else if(myNot>=35 && myNot<60){
        cout<<"myNotunuz:"<<myNot<<endl;
        cout<<"myNotunuz CC'dir.";
    }
    else{
        cout<<"myNotunuz:"<<myNot<<endl;
        cout<<"myNotunuz FF'dir. Dersten kaldiniz! ";
    }

    return 0;
}