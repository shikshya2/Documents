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
		complex(complex &c){
			real=c.real;
			real=c.imag;
		}
		void showdata(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(){
complex c1;
complex c2s(1.2,2.4);
complex c3(c2);	
c1.showdata();
c2.showdata();
c3.showdata();	
}
