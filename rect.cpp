//craete a class rectangle with data members length,breadth and calculate area.
#include<iostream>
using namespace std;
class rectangle{
	private:
		float length;
		float breadth;
		float area;
		public:
			void input(){
				cout<<"Enter the length:"<<endl;
				cin>>length;
				cout<<"Enter the breadth:"<<endl;
				cin>>breadth;
			}
			void process(){
				area=length*breadth;
			}
			void display(){
				cout<<"Area="<<area;
			}
};
int main(){
	rectangle R1;
	R1.input();
	R1.process();
	R1.display();
}