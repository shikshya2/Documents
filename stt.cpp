#include<iostream>
using namespace std;
class complex{
	float real;
	float imag;
	static int count;
	public:
		void getdata(){
			cout<<"Enter a complex number"<<endl;
			cin>>real>>imag;
			count++;
		}
		void showdata(){
			cout<<real<<"+i"<<imag<<endl;
			cout<<"count="<<count<<endl;
		}
};
int complex::count;
int main()
{
	complex c1,c2,c3,c4;
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.getdata();
return 0;
}