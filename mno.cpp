#include<iostream>
using namespace std;
class complex{
	float real;
	float imag;
	public:
		complex(){ //default constructor
			real=0;
			imag=0;
		}
		complex(float r,float i) //parameterized constructor
		{
			real=r;
			imag=i;
		}
		complex(complex &c) //copy constructor
		{
			real=c.real;
			imag=c.imag;
		}
		void showdata(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(){
	complex c1;
	complex c2(4.3,5.6);
	complex c3(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
}
