#include<iostream>
using namespace std;
class student{
	public:
		string name;
		student(){
			cout<<"Non parameterized constructor:"<<endl;
		}
		student(string name){
			this->name=name;
			cout<<"Parameterized constructor:"<<endl;
		}
};
int main(){
	student c1();
	return 0;
}