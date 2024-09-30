#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies." << endl;
    }
};
class Bat : public Mammal, public Bird {
public:
    void sleep() {
        cout << "Bat sleeps upside down." << endl;
    }
};
int main() {
    Bat bat;
    bat.eat();  
    bat.walk();
    bat.fly();
    bat.sleep();
    return 0;
}
