#include <iostream>
using namespace std;
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
    void stop() {
        cout << "Vehicle stopped." << endl;
    }
};
class Engine {
public:
    void ignite() {
        cout << "Engine ignited." << endl;
    }
    void shutDown() {
        cout << "Engine shut down." << endl;
    }
};
class Car : public Vehicle, public Engine {
public:
    void drive() {
        cout << "Car is being driven." << endl;
    }
    void park() {
        cout << "Car is parked." << endl;
    }
};
int main() {
    Car myCar;
    myCar.start();  
    myCar.ignite();  
    myCar.drive();   
    myCar.park();    
    myCar.shutDown(); 
    myCar.stop();    
    return 0;
}
