#include <iostream>
#include <string>
using namespace std;

class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound.\n";
        }
};

class Cat : public Animal {
    public:     
        void animalSound() {
            cout << "The cat says: miyav miyav.\n";
        }
};

class Dog : public Animal {
    public:     
        void animalSound() {
            cout << "The dog says: hav hav.\n";
        }
};

int main() {
    Animal animal;
    Cat cat;
    Dog dog;

    cat.animalSound();
    dog.animalSound();
    animal.animalSound();

    return 0;
}
