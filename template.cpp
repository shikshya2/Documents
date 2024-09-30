#include<iostream>
using namespace std;
template<class T>
T addition(T x,T y)
{
	T sum;
	sum=x+y;
	return sum;
}
int main(){
	int a=4,b=3,sumi;
	float c=1.1,d=2.2,sumf;
	sumi=addition(a,b);
	sumf=addition(c,d);
	cout<<"sum of integers is:"<<sumi<<endl;
	cout<<"sum of float is:"<<sumf<<endl;
	return 0;
}