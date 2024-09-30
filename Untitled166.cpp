#include<iostream>
using namespace std;
#define PI 3.14
class Circle {
private:
double radius;
public:
Circle(double r) : radius(r) {}
double getCircumference() {
return 2 * PI * radius;
}
double getArea() {
return PI * radius * radius;
}
};
int main(){
	circle c(4);
	c1.getcircumference();
	c1.getarea();
	cout<<"circumference"<<cicumference<<endl;
	cout<<"area"<<area<<endl;
	return 0;

}