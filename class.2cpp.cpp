#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	car c1;
	c1.brand="ford";
	c1.model="mustang";
	c1.year=1999;
	cout<<"brand:"<<c1.brand<<endl;
	cout<<"model:"<<c1.model<<endl;
	cout<<"year:"<<c1.year<<endl;
	return 0;
}