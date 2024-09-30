#include<iostream>
using namespace std;
class animal{
	public:
	void info(){
		cout<<"I am an animal"<<endl;
	}
};
class dog:public animal{
	public:
void bark(){
	cout<<"I am a dog.voww voww"<<endl;
}	
};
class cat:public animal{
public:
	void meow(){
		cout<<"I am a cat.meoww meoww"<<endl;		
};
	int main(){
		dog d1,cat c1;
		d1.info();
		d1.bark();
		c1.info();
		c1.meow();
		return 0;
	}