#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
			person(string n,int a):name(n),age(a){}
			void displayinfo(){
				cout<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
			}
			friend void jethalal(person p1,person p2);
};
void jethalal(person p1,person p2){
	if(p1.age>p2.age)
		cout<<"jetho:"<<p1.name<<endl;
		if(p1.age<p2.age)
		cout<<"jethi:"<<p2.name<<endl;
		if(p2.age==p1.age)
		cout<<"Same age"<<endl;
	
	
}
int main(){
	person p1("Shailaj",40);
	person p2("Amrita",50);
	jethalal(p1,p2);
	return 0;
}