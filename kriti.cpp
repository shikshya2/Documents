#include<iostream>
using namespace std;
class vehicle{
	public:
		string brand="ford";
		void horn(){
			cout<<"tuttt tutt";
		}
};
class car:public vehicle{
	public:
		string model="Mustang";
};
int main(){
	car c1;
	c1.horn();
	  cout << c1.brand + " " + c1.model;
	return 0;
}