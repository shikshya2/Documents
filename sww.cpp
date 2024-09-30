#include<iostream>
using namespace std;
int main(){
	int n;
	float a[10],sum=0,avg;
		cout<<"Enter the number of elements:";
		cin>>n;
		cout<<"Start entering the values:";
		for(int i=0;i<=n;i++){
		cin>>a[i];
		sum=sum+a[i];
		}
		avg=sum/n;
		cout<<"sum="<<sum<<endl<<"avg="<<avg<<endl;
		return 0;
}