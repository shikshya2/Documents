//Array of pointers to base class
#include<iostream>
using namespace std;
class base //abstract class
{
	public:
		virtual void show()=0; // pure virtual function
};
class derv1:public base
{
	void show(){
		cout<<"Inside derv1 class"<<endl;
	}
};
class derv2:public base
{	void show(){
		cout<<"Inside derv1 class"<<endl;
	}	
};
int main(){
	base *arr[2];
	derv1 dv1;
	derv2 dv2;
	arr[0]=&dv1;
	arr[1]=&dv1;
	arr[0]->show();
	arr[1]->show();
	return 0;
	
}