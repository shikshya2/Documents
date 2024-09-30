//constructor class and pass the arguments to the constructor.
#include<iostream>
using namespace std;
class car{
	public:
		string brand; //attributes
		string model;
		int year;
		car(string x,string y,int z){ //constructor
			brand=x;
			model=y;
			year=z;
		}
};
int main(){
	car c1("BMW","X5",1999); //passing parameters to constructor
	car c2("Ford","Mustang",2000);
	cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<" "<<endl;
	cout<<c2.brand<<c2.model<<c2.year;
	return 0;
}