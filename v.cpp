#include<iostream> //cpp to find greatest between two numbers using the concept of return by reference.
using namespace std;
int &max(int &p,int&q)
{
	if(p>q)
	return p;
	else
	return q;
}
int main(){
	int t1,t2;
	cout<<"Enter two temperatures";
	cin>>t1>>t2;
	max(t1,t2)=100;
	cout<<"The greatest number is"<<max(t1,t2);
	return 0;
}