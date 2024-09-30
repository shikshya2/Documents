#include<iostream>
using namespace std;
class mammal{
	public:
	mammal(){
		cout<<"Mammals can give birth";
	}
};
class wingedanimal{
	public:
	winged animal(){
		cout<<"Winged animal can flap"
	}
};
class bat:public mammal,public winged animal
int main(){
	bat b1;
	return 0;
}
