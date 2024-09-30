#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	try 
	{
		int i=0;
		while(1){
			cout<<a[i]<<endl;
			i++;
			throw i;
		}
	}
	catch(int j){
		cout<<"Array index out of bound"<<j;
	}
	
}