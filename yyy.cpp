#include<iostream>
using namespace std;
void swap(int*p,int*q);
int main(){
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<"Before calling the function swap a="<<a<<"b="<<b<<endl;
	swap(&a,&b);
	cout<<"After calling the function swap a="<<a<<"b="<<b<<endl;
	return 0;
}
void swap(int *p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}