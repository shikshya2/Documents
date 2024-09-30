// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;
class Shape { //abstract class
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }
    virtual float calculateArea() = 0;// pure virtual function
};
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;
cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "Enter radius of the circle:";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
    return 0;
}