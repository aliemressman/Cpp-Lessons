#include <iostream>
using namespace std;

int main(){
    int age;
    string result;

    cout<<"Lutfen yasinizi giriniz:\n";
    cin>>age;

    result = (age > 50)? "Yaslisiniz" : "Gencsiniz";
    cout<<result;
    
    return 0;
}