#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	char ch;
	ifstream in;
	in.open("Student.txt",ios::in);
	if(in.fail()) //errror handling while opening a file
	{
		cout<<"Error opening a file"<<endl;
		cout<<"Existing....."<<endl;
		exit(1);
	}
	cout<<"Contentsof the file:"<<endl;
	while(in.get(ch)){
		cout<<ch;
	}
	in.close();
	return 0;
}