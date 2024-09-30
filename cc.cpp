#include <iostream>
#include <string>
using namespace std;
class Driver;
class Car {
private:
    string make;
    string model;
    string condition;
public:
    Car(const string& make, const string& model, const string& condition)
        : make(make), model(model), condition(condition) {}
    void displayInfo() const {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Condition: " << condition << endl;
    }
    void drive(const Driver& driver) const;
};

class Driver {
private:
    string name;
    int skillLevel;

public:
    // Constructor to initialize the Driver object
    Driver(const string& name, int skillLevel)
        : name(name), skillLevel(skillLevel) {}
    void displayInfo() const {
        cout << "Driver Name: " << name << endl;
        cout << "Driver Skill Level: " << skillLevel << endl;
    }
    friend class Car;
};
void Car::drive(const Driver& driver) const {
    cout << "Driver Information:" << endl;
    driver.displayInfo();
    
    cout << "Car Information:" << endl;
    displayInfo();
    cout << "Car Condition Based on Driver's Skill Level:" << endl;
    if (driver.skillLevel >= 8) {
        cout << "The car is being driven expertly. The condition remains optimal." << endl;
    } else if (driver.skillLevel >= 5) {
        cout << "The car is being driven moderately well. The condition is good but requires attention." << endl;
    } else {
        cout << "The car is being driven poorly. The condition may deteriorate quickly." << endl;
    }
}

int main() {
    // Create Car and Driver objects
    Car myCar("Toyota", "Camry", "Excellent");
    Driver myDriver("Jashmin", 7);
    myCar.drive(myDriver);

    return 0;
}