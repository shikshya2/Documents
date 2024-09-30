#include <iostream>
using namespace std;
#include <string>
class Rectangle {
private:
    double length;
    double breadth;
    string color;

public:
    // Constructor to initialize length and breadth
    Rectangle(double l, double b) : length(l), breadth(b), color("None") {}

    // Getter and setter for color
    void setColor(const string&c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    // Function to display the rectangle details
    void display() const {
        cout << "Rectangle(length=" << length << ", breadth=" << breadth 
                  << ", color=" << color << ")" << std::endl;
    }
};

// Non-member function to paint the rectangle
Rectangle paint(Rectangle rect, const string&color) {
    rect.setColor(color);
    return rect;
}

int main() {
    // Create a rectangle object
    Rectangle rect(11, 5.0);
    
    // Display before painting
    rect.display();
    
    // Paint the rectangle and display the colored rectangle
    Rectangle coloredRect = paint(rect, "pink");
    coloredRect.display();
    
    return 0;
}
