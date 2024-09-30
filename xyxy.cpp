#include<iostream>
using namespace std;
void counter()
{
 int count=0;
	cout<<" "<<count++;
}
int main(){

	for(int i=0;i<3;i++)
	{
		counter();
	}
}