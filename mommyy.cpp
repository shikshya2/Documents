#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Overloading the < operator
    bool operator<(const Person& other) const {
        return this->age < other.age;
    }

    // Method to display person's details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Getter for age (optional)
    int getAge() const {
        return age;
    }
};
int main() {
    Person person1("Binisha", 30);
    Person person2("Smirti", 25);
    person1.display();
    person2.display();
// Comparing ages using overloaded < operator
    if (person1 < person2) {
        cout << person1.getAge() << " is younger than " << person2.getAge() << endl;
    } else {
        cout << person1.getAge() << " is not younger than " << person2.getAge() << endl;
    }
    return 0;
}
