#include<iostream>
using namespace std;
inline float calcsi(float p,float t,float r)
{
	return(p*t*r)/100;
}
int main(){
	float t=2.00,r=12;
	cout<<"p"<<"\t"<<"t"<<"\t"<<"r"<<"\t"<<endl;
	cout<<"------------------------"<<endl;
	for(float p=100;p<=500;p=p+100){
		cout<<"p"<<"\t"<<"t"<<"\t"<<"r"<<"\t"<<calcsi(p,t,r)<<endl;
	}
	return 0;
	
}