//Write a characters entered by the user until the user presses the enter key
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	ofstream out; //out for writtting mode
	out.open("Student.txt",ios::out);
	cout<<"Start writing the characters:";
	while((ch=cin.get())!='\n'){
		out.put(ch);
	}
	out.close();
	cout<<"File written!";
	return 0;
}