#include<iostream>
using namespace std;
template<class T>
T max(T x,T y){
	if(x>y)
		return x;
		else
			return y;
		
	}
	template<class T>
	T max(T x,T y,T z)
	{
		if(x>y && x>z)
			return x;
			else if(y>x && y>z)
				return y;
			else
			return z;
		
	
}
int main(){
	int a,b,c;
	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;
	cout<<"The greatest amomg three numbers is:"<<max(a,b,c)<<endl;
	cout<<"The greatest among two numbers is:"<<max(a,b);
	return 0;
	
}