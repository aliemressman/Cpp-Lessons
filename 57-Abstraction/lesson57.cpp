#include <iostream>
#include <string>
using namespace std;

class SmartPhone {
    public:
        int x = 7;
        virtual void TakeAPhoto() = 0;  // Bu kullanım sayesinde abstract oldugunu anladık.
        virtual void SendAMessage() = 0;
        virtual void MakeACall() = 0;
};

class Android : public SmartPhone {
    public:
        void TakeAPhoto() {
            cout << "Android photo\n";
        }
        void SendAMessage() {
            cout << "Android Message\n";
        }
        void MakeACall() {
            cout << "Android is calling\n";
        }
};

class IOS : public SmartPhone {
    public:
        void TakeAPhoto() {
            cout << "IOS photo\n";
        }
        void SendAMessage() {
            cout << "IOS Message\n";
        }
        void MakeACall() {
            cout << "IOS is calling\n";
        }
};

class Huawei : public SmartPhone {
    public:
        void TakeAPhoto() {
            cout << "Huawei photo\n";
        }
        void SendAMessage() {
            cout << "Huawei Message\n";
        }
        void MakeACall() {
            cout << "Huawei is calling\n";
        }
};

int main() {
    SmartPhone* android = new Android();
    SmartPhone* ios = new IOS();
    SmartPhone* huawei = new Huawei();

    android -> MakeACall();
    android -> SendAMessage();
    android -> TakeAPhoto();
    ios->MakeACall();
    ios->SendAMessage();
    ios ->TakeAPhoto();
    huawei->MakeACall();
    huawei->SendAMessage();
    huawei ->TakeAPhoto();

    return 0;
}