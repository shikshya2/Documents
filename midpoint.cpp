#include <iostream>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord = 0.0, double yCoord = 0.0) : x(xCoord), y(yCoord) {}
    Point midpoint(const Point& other) const {
        double midX = (x + other.x) / 2.0;
        double midY = (y + other.y) / 2.0;
        return Point(midX, midY);
    }
    void print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p1(2.0, 3.0);
    Point p2(4.0, 7.0);
    Point mid = p1.midpoint(p2);
    cout << "p1: ";
    p1.print();
    cout << "p2: ";
    p2.print();
    cout << "Midpoint of p1 and p2: ";
    mid.print();

    return 0;
}