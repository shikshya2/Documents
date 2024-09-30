//concept of function template with multiple arguments
#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void calculatesize(T1 a,T2 b,T3 c){
	cout<<"size of a:"<<sizeof(a)<<"bytes"<<endl;
	cout<<"size of b:"<<sizeof(b)<<"bytes"<<endl;
	cout<<"size of c:"<<sizeof(c)<<"bytes"<<endl;
}
int main(){
	calculatesize(1,5.67,'a');
	return 0;
}