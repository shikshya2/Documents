#include<iostream>
using namespace std;
class mammal{
	public:
	mammal(){
		cout<<"Mammals can give birth"<<endl;
	}
};
class wingedanimal{
	public:
	wingedanimal(){
		cout<<"Winged animal can flap"<<endl;
	}
};
class bat:public mammal,public wingedanimal{};
int main(){
bat b1;
	return 0;
}