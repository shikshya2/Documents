#include<iostream>
using namespace std;
class book{
	private:
		string title;
		string author;
		int price;
		int pages;
		public:
			book( string t, string a,float p,int pg):title(t),author(a),price(p),pages(pg){};
			string gettitle(){
				return title;
			}
			string getauthor(){
				return author;
			}
			float getprice(){
				return price;
			}
			int getpages(){
				return pages;
			}
};
int main(){
	book b1("Rich Dad And Poor Dad","XYZ",890,124);
	cout<<"Title:"<<b1.gettitle()<<endl;
	cout<<"Author:"<<b1.getauthor();
	
}