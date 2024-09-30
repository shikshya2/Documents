#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<"The animal is eating"<<endl;
		}
};
class mammal:public animal{
	public:
		void drinkmilk(){
			cout<<"The mammal is drinking milk"<<endl;
		}
};
class dog:public mammal{
	public:
		void bark(){
			cout<<"The dog is barkng"<<endl;
		}
};
int main(){
	dog mydog;
	mydog.eat();
	mydog.drinkmilk();
	mydog.bark();
	return 0;
}