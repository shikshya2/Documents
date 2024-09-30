#include<iostream>
using namespace std;
class Point {
private:
int x;
int y;
public:
Point(int xValue, int yValue) : x(xValue), y(yValue) {}
void getCords() {
cout<<"X-coordinate:"<<x<<endl;
cout<<"Y-coordinate:"<<y<<endl;
}
};
int main() {
Point p(67,69);
p.getCords();
return 0;
}