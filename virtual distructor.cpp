//WAP in cpp to illustrate the concept of virtual destructor.
#include<iostream>
using namespace std;
class base
{
	public:
		virtual ~base()
		{
			cout<<"Destroying the base class objrct...";
		}
};
class derv1:public base
{
	public:
		~derv1()
		{
			cout<<"Destroying the derived class object.. ";
		}
};
int main(){
	base *bptr=new derv1;
	delete bptr;
	return 0;
}