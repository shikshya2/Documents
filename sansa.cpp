#include<iostream>
using namespace std;
class complex{
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
		~complex(){
			cout<<"Destroying object"<<endl;
		}
		void showdata(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(){
	complex c1;
	complex c2(1.2,3.4);
	c1.showdata();
	c2.showdata();
	return 0;
}