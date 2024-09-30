#include <iostream>
using namespace std;
class Animal {
public:
    virtual void Speak() {
        cout << "Animal speaks" << endl;
    }
};
class Dog : public Animal {
public:
    void Speak() override {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
public:
    void Speak() override {
        cout << "Cat meows" << endl;
    }
};
int main() {
    Animal* ptr;
    Dog dog;
    Cat cat;
    ptr = &dog;
    ptr->Speak();
    ptr = &cat;
    ptr->Speak();  
    return 0;
}
