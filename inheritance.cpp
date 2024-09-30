#include<iostream>
using namespace std;
class Mammal{
	Mammal(){
		cout<<"Mammals can give birth";
	}
};
class Wingedanimal{
	Wingedanimal(){
		cout<<"Winged animal can flap";
	}
};
class Bat : public Mammal,public Wingedanimal {};
int main(){
	Bat b1;
	return 0;
}