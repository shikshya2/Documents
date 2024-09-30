#include<iostream>
#include<iostream>
using namespace std;
class Book {
private:
string title;
string author;
float price;
int pages;
public:
Book(const string&t, const string&a, float p, int pg)
: title(t), author(a), price(p), pages(pg) {};
string getTitle() {
return title;
}
string getAuthor() {
return author;
}
float getPrice() {
return price;
}
int getPages() {
return pages;
}
};
int main(){
	Book b1("It ends with us","Coolen Hoover",890.33,400);
	cout<<"Title:"<<b1.getTitle()<<endl;
	cout<<"Author:"<<b1.getAuthor()<<endl;
	cout<<"Price:"<<b1.getPrice()<<endl;
	cout<<"Pages:"<<b1.getPages()<<endl;
	return 0;	
}