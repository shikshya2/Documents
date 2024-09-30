//WAP in cpp to illustrate the concept pf pointer to derived object.
#include<iostream>
using namespace std;
class base{
	public:
		virtual void show(){
			cout<<"Inside base class"<<endl;
		}
};
class derv1:public base
{
public:
void show(){
	cout<<"Inside derive class";
}	
};
class derv2:public base
{
	public:
void show(){
	cout<<"Inside derive class";
}	
};
int main(){
	base *ptr;
	derv1 dv1;
	derv2 dv2;
	ptr=&dv1;
	ptr->show();
	ptr=&dv2;
	ptr->show();
	return 0;
}