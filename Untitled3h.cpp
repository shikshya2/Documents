#include <iostream>
using namespace std;
class Circle{
    private:
        int radius;
        const double PI = 3.14;
    public:
        void set_radius(int r){
            radius = r;
        }
        double get_circum(){
            double circum = 2*PI*radius;
            return circum;
        }
        double get_area(){
            double area = PI*radius*radius;
            return area;
        }
        
};


int main()
{
    Circle cx, cy;
    cx.set_radius(10);
    cy.set_radius(20);
    cout << "Circle 1 Area: "<< cx.get_area()<<endl;
    cout << "Circle 2 Circumference: "<< cy.get_circum()<<endl;
    return 0;
}