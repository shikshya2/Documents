#include<iostream>
using namespace std;
char name[23];
int age;
public:
	void setdata(){
		cout<<"The entered name and age is:";
		cin>>name>>age;
	}
	void getdata(){
		cout<<"The entered name and age is:";
		cout<<"Name"=name<<endl<<"Age"=age<<endl;
	}
	int main(){
		person c1,c2;
		c1.setdata();
		c2.getdata();
		return 0;
	}