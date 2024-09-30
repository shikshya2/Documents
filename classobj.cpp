// program to create a class employee with name age and salary.
#include<iostream>
using namespace std;
class employee{
	private:
		char name[20];
		int age;
		float salary;
		public:
			void input(){
				cout<<"Enter name"<<endl;
				cin>>name;
				cout<<"Enter age"<<endl;
				cin>>age;
				cout<<"Enter salary"<<endl;
				cin>>salary;
			}
				void display(){
					cout<<"Name="<<name<<endl;
					cout<<"Age="<<age<<endl;
					cout<<"Salary="<<salary<<endl;
					}
};
int main(){
	employee c1;
	c1.input();
	c1.display();
	return 0;
}
