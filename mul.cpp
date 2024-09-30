#include <iostream>

using namespace std; 

// First base class
class Shape {
public:
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

// Second base class
class Color {
public:
    void displayColor() {
        cout << "This is a colored object." << endl;
    }
};

// Derived class inheriting from both Shape and Color
class ColoredShape : public Shape, public Color {
public:
    void displayColoredShape() {
        cout << "This is a colored shape." << endl;
    }
};

int main() {
    // Create an object of the derived class (ColoredShape)
    ColoredShape myColoredShape;

    // Call methods from both base classes and the derived class
    myColoredShape.displayShape();     // Inherited from Shape
    myColoredShape.displayColor();     // Inherited from Color
    myColoredShape.displayColoredShape(); // Defined in ColoredShape

    return 0;
}


