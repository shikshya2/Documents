#include<iostream>
using namespace std;
int calcsi(int p,int t,int r)
{
	float i=(p*t*r)/100;
	return i;
}
int main()
{
	float p1,t1,r1,i1;
	cout<<"Enter the values:p1,t1,r1"<<endl;
	cin>>p1>>t1>>r1;
	i1=calcsi(p1,t1,r1);
	cout<<"The value of simple intrest is"<<i1<<endl;
	return 0;
}