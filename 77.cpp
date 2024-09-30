#include<iostream>
#include<string>
using namespace std;
class Book{
	private:
		char title;
		char author;
		float price;
		int pages;
		public:
			void get(){
				cout<<"Enter Title";
				cin>>title;
				cout<<"Enter Author";
				cin>>author;
				cout<<"Enter pages";
				cin>>pages;
				cout<<"Enter price";
				cin>>price;
				
					}
					void show(){
						cout<<"title"<<title<<endl<<"Author"<<author<<endl<<"Pages"<<pages<<endl<<"price"<<price<<endl;
					}
					void set(char t,char a,int pg,float pr){
						char title=t;
						char author=a;
						float price=pr;
						int pages=pg;
					}
};
int main(){
	Book b1;
	b1.get();
	b1.set('gfg','gg',800,300);
	b1.show();
	return 0;
}