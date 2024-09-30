//Multiple inheritance
#include<iostream>
using namespace std;
class myclass{ //baseclass
	public:
		void myfunction(){
			cout<<"some contents of base class";
		}
};
class myotherclass{ //baseclass
	public:
		void myotherfunction(){
			cout<<"Some contents of another base class";
		}
};
class mychildclass:public myclass,public myotherclass{ //derived class
	
};
int main(){
	mychildclass c1;
	c1.myfunction();
	c1.myotherfunction();
	return 0;
}