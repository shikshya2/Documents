//cpp to find addition substraction multiplication and divison
#include<iostream>
using namespace std;
int main(){
	double num1,num2;
	cout<<"Enter a first number:";
	cin>>num1;
	cout<<"Enter a second number:";
	cin>>num2;
	cout<<"Addition="<<(num1+num2)<<endl;
	cout<<"Substraction="<<(num1-num2)<<endl;
	cout<<"Multiplication="<<(num1*num2)<<endl;
	if(num2!=0){
		cout<<"Divison="<<(num1/num2)<<endl;
	}
		else{
			cout<<"Not divisible:"<<endl;
	}
	}