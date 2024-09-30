//constructor overloading cpp:
#include<iostream>
#include<conio.h>
using namespace std;
class item{
	private:
		int code;
		int price;
		public:
			item(){
				code=price=0;
			}
			item(int c,int p){
				code=c;
				price=p;
			}
			item(item &x){
				code=x.code;
				price=x.price;
			}
			void display(){
				cout<<"code:"<<code<<endl;
				cout<<"price:"<<price<<endl;
			}
};
int main(){
	item i1;
	item i2(101,300);
	item i3(i2);
	i1.display();
	i2.display();
	i3.display();
	return 0;
}