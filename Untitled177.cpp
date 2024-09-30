#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
			void get(){
				cout<<"Enter the name and age of person:";
				cin>>name>>age;
			}
			void display(){
				cout<<"name"<<name<<endl;
				cout<<"age"<<age<<endl;
			}
};
int main(){
	person p1,p2;
	p1.get();
	p2.get();
	p1.display();
	p2.display();
	return 0;
}