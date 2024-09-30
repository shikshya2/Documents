#include<iostream>
using namespace std;
class student{
	public:
		string name;
		void show(){
			cout<<"Non parameterized"<<endl;
		}
		void show(string name){
			this->name=name;
				cout<<"parameterized"<<endl;
		}
};
int main(){
	student s1("sumnina");
	return 0;
}