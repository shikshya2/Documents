#include<iostream>
using namespace std;
class parent{
	public:
		void getinfo(){
			cout<<"parent class"<<endl;
		}
	};
		class child:public parent{
				public:
			void getinfo(){
				cout<<"child class"<<endl;
			}
			
			
		};
		
int main(){
	child c1;
	c1.getinfo();
}