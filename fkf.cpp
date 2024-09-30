#include <iostream>
using namespace std;
class Rectangle;
class Circle {
private:
double radius;
public:

Circle(double r) : radius(r) {}
double calculateArea() const {
return 3.14159 * radius * radius;
}
friend void compareArea(const Circle &c, const Rectangle &r);
};
class Rectangle {
private:
double length;
double width;
public:
Rectangle(double l, double w) : length(l), width(w) {}
double calculateArea() const {
return length * width;
}
friend void compareArea(const Circle &c, const Rectangle &r);
};
void compareArea(const Circle &c, const Rectangle &r) {
double areaCircle = c.calculateArea();
double areaRectangle = r.calculateArea();
if (areaCircle > areaRectangle) {
cout << "Circle has a larger area than Rectangle." << endl;
} else if (areaRectangle > areaCircle) {
cout << "Rectangle has a larger area than Circle." << endl;
} else {
cout << "Circle and Rectangle have the same area." << endl;
}
}
int main() {
Circle circle(4.0);
Rectangle rectangle(5.0, 6.0);
compareArea(circle, rectangle);
return 0;
}