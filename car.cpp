#include <iostream>
#include <string>
using namespace std;
// Forward declaration of Driver class
class Driver;

class Car {
private:
    string make;
    string model;
    string condition;

public:
    // Constructor to initialize Car
    Car(const string& make, const string& model, const string& condition)
        : make(make), model(model), condition(condition) {}

    // Function to display car details
    void displayInfo() const {
        cout << "Car Make: " << make << std::endl;
        cout << "Car Model: " << model << std::endl;
        cout << "Car Condition: " << condition << std::endl;
    }

    // Function to determine car condition based on driver's skill
    void drive(const Driver& driver) const;
};

class Driver {
private:
    string name;
    int skillLevel;  // Skill level ranging from 1 (beginner) to 10 (expert)

public:
    // Constructor to initialize Driver
    Driver(const string& name, int skillLevel)
        : name(name), skillLevel(skillLevel) {}

    // Function to display driver details
    void displayInfo() const {
        cout << "Driver Name: " << name <<endl;
        cout << "Driver Skill Level: " << skillLevel << std::endl;
    }

    // Friend declaration to allow Car class access to Driver's skill level
    friend class Car;
};

// Implementation of Car's drive method
void Cardrive(const Driver& driver) const {
    cout << "Driver Information:" <<endl;
    driver.displayInfo();
    cout << "Car Information:" <<endl;
    displayInfo();
    
    // Determine car condition based on driver's skill level
    if (driver.skillLevel >= 8) {
        cout << "The car is being driven expertly. The condition remains optimal." <<endl;
    } else if (driver.skillLevel >= 5) {
        cout << "The car is being driven moderately well. The condition is good but requires attention." <<endl;
    } else {
        cout << "The car is being driven poorly. The condition may deteriorate quickly." <<endl;
    }
}

int main() {
    // Create Car and Driver objects
    Car myCar("Toyota", "Camry", "Excellent");
    Driver myDriver("John Doe", 7);

    // Simulate driving the car with the driver
    myCar.drive(myDriver);

    return 0;
}