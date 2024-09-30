#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};
class Bird : public Animal {
public:
    void chirp() {
        cout << "The bird chirps." << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;
    Bird bird;
    cout << "Dog: " << endl;
    dog.eat(); 
    dog.bark();
    cout << "Cat: " << endl;
    cat.eat();
    cat.meow();
    cout << "Bird: " << endl;
    bird.eat(); 
    bird.chirp(); 
    return 0;
}
