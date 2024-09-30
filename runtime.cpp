#include <iostream>
using namespace std;
class Animal {
public:
    void sound() const {
        cout << "Some generic animal sound" << endl;
    }
};
class Dog : public Animal {
public:
    void sound(){
        cout << "Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();

    animal = &cat;
    animal->sound();

    return 0;
}
