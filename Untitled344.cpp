#include <iostream>
using namespace std;
class Rectangle{
    private:
        int l, b;
    public:
        void input(int len, int bre){
            l = len;
            b = bre;
        }
        int area(){
            return l * b;
        }
};
int main(){
    Rectangle r1, r2;
    r1.input(68, 69);
    r2.input(88, 76);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
}
