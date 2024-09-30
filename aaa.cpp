//multilevel inheritance
#include<iostream>
using namespace std;
class myclass{
	public:
		void myfunction(){
			cout<<"Some contents of base class";
		}
};
class child:public myclass{
	
};
class grandchild:public myclass{
	
	
};
int main(){
	grandchild g1;
	g1.myfunction();
	return 0;
}