#include<iostream>
using namespace std;
class complex{
	private:
		float real;
		float imag;
		public:
			complex(){
			real=0;
			imag=0;
			}
			complex(float r,float i){
				real=r;
				imag=i;
			}
			void showdata(){
				cout<<"The sum is:"<<real<<"+i"<<imag<<endl;
			}
			friend complex addition(complex,complex);
};
complex addition(complex cc1,complex cc2){
	complex temp;
	temp.real=cc1.real+cc2.real;
	temp.imag=cc1.imag+cc2.imag;
	return temp;
}
int main(){
	complex c1(1.1,2.2),c2(2,4),c3;
	c3=addition(c1,c2);
	c3.showdata();
	return 0;
}