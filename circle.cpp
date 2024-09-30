//create a class circle with its data members radius,area.
#include<iostream>
#define PI 3.14
using namespace std;
class circle{
	private:
		float radius;
		float area;
		public:
			void input(){
				cout<<"Enter the radius:";
				cin>>radius;
			}
			void process(){
				area=PI*radius*radius;
			}
			void display(){
				cout<<"area="<<area;
			}
};
int main(){
	circle x1;
	x1.input();
	x1.process();
	x1.display();
}