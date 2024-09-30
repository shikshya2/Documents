#include<iostream>
using namespace std;
class Complex{
private:
float real;
float imaginary;
public:
Complex(float r = 0.0, float i = 0.0) : real(r), imaginary(i) {}
void setReal(float r) {
real = r;
}
void setImaginary(float i) {
imaginary = i;
}
void get(){
cout<<real<<"+"<<imaginary<<"i"<<endl;
}
};
int main() {
Complex c1(8.0, 9.0);
c1.get();
c1.setReal(4);
c1.setImaginary(2);
c1.get();
 return 0;
}

