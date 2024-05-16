#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        virtual void Sound() = 0;

};

class Dog:public Animal {
    public:
        void Sound() {
            cout << "The dog say: Hav Hav\n";
        }
};

class Cat:public Animal {
    public:
        void Sound() {
            cout << "The cat say: Miyav Miyav\n";
        }
};

class Cow:public Animal {
    public:
        void Sound() {
            cout << "The cow say: moo moo\n";
        }
};

void AnimalSound(Animal* ptr) {
    ptr -> Sound();
}

int main() {
    Dog dg;
    Cat ct;
    Cow cw;
    AnimalSound(&dg);
    AnimalSound(&ct);
    AnimalSound(&cw);

   return 0; 
}