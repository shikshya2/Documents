#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "The animal is eating." << endl;
    }
};
class Mammal : public Animal {
public:
    void drinkMilk() {
        cout << "The mammal is drinking milk." << endl;
    }
};
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};
int main() {
    Dog myDog;
    myDog.eat();        
    myDog.drinkMilk(); 
    myDog.bark();   
    return 0;
}
