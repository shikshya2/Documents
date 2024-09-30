#include<iostream>
using namespace std;
class person{
	string name;
     int age;
public:
	void setdata(name,age){
		cout<<"The entered name and age is:";
		cin>>name>>age;
	}
	void getdata(name n1,age n2){
		cout<<"Name"=name<<endl;
		cout<<"Age"=age<<endl;
		}	
};
int main(){
	person v1,v2;
	v1.setdata();
	v2.getdata();
	return 0;
}




