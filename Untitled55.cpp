
#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
			void get(){
				cout<<"Enter your name and age"<<endl;
				cin>>name>>age;
			}
			void set(){
			cout<<"name"<<name<<endl;	
				cout<<"age"<<age<<endl;
			}
};
int main(){
	person w1,w2;
	w1.get();
	w2.get();
	w1.set();
	w2.set();
	return 0;
}