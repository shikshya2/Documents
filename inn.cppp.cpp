#include<iostream>
using namespace std;
class student{
	protected:
		char name[20];
		int roll;
		public:
			void getdata(){
				cout<<"Enter the name and roll numbr"<<endl;
				cin>>name>>roll;
			};
			class employee{
				protected:
					int id;
					char organizationname[20];
					public:
						void setdata(){
							cout<<"Enter the id and organization name"<<endl;
							cin>>id>>organizationname;
						}
			};
};
class officer : public student,public employee{
	protected:
	int working hour;
	public:
		void getofficer(){
			cout<<"Enter the working hour"<<endl;
			cin>>working hour;
			
		}
		void showdata(){
			cout<<"The information of the officer is:"<<endl<<"name="<<name<<endl<<"id="<<id<<endl<<"organization="<<organizationname<<endl;
		}
	};
int main(){
	officer o1;
	o1.getdata();
	o1.setdata();
	o1.getofficer();
}