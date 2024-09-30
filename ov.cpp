include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;      

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    bool operator<(Person other) {
        return age < other.age; 
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("Alisha", 25);
    Person person2("Smirti", 30);   
    person1.display(); 
    person2.display();  
    if (person1 < person2) {
        cout << person1.name << " is younger than " << person2.name << endl;
    } else {
        cout << person1.name << " is not younger than " << person2.name << endl;
    }

    return 0;
}