#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string& pname, int page) : name(pname), age(page) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Setter functions (optional)
    void setName(const std::string& pname) {
        name = pname;
    }

    void setAge(int page) {
        age = page;
    }
};

int main() {
    // Create an instance of Person
    Person person1("Alice", 30);

    // Accessing private members using getter functions
    std::cout << "Person's name: " << person1.getName() << std::endl;
    std::cout << "Person's age: " << person1.getAge() << std::endl;

    // Example of using setter functions
    person1.setName("Bob");
    person1.setAge(25);

    std::cout << "\nUpdated information:" << std::endl;
    std::cout << "Person's name: " << person1.getName() << std::endl;
    std::cout << "Person's age: " << person1.getAge() << std::endl;

    return 0;
}
