#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
	char name[25];
	public:
		void getdata()
		{
		cout<<"Enter the name and roll number"<<endl;
		cin>>name>>roll no;	
};
class employee{
	protected:
		int id;
		char org_name[25];
		public:
			void setdata()
			{
			cout<<"Enter the id and organization name"<<endl;
		cin>>id>>org_name;	
				
			}
};
class officer:public student,public employee
{
	protected:
		int working_hour;
		public:
			void getofficer(){
				cout<<"Enter working hour"<<endl;
				cin>>working_hour;
			}
}
void showdata(){
	cout<<"The information of officer is:"<<endl<<"Name"=name<<endl<<"Roll no"=roll<<endl<<"Organization name"=organization name<<endl;
};
int main(){
	officer.o;
	o.getdata();
	o.setdata();
	o.showdata();
	return 0;
}