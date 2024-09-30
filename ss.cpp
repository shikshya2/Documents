#include<iostream>
using namespace std;
class Rectangle{
	private:
		double length;
		double breadth;
		string color;
		public:
			Rectangle(double len,double brd):length(len),breadth(brd),color("none"){}
			double getlength(){
				return length;
			}
			double getbreadth(){
				return breadth;
			}
			string getcolor(){
				return color;
			}
			void setcolor(string &col){
				color=col;
			}
			void display(){
				cout<<"Rectangle[length:"<<length<<",breadth:"<<breadth<<",color:"<<color<<"]"<<endl;
			}
};
Rectangle paint(Rectangle &rect,string&color){
	Rectangle paintedRect=rect;
	paintedRect.setcolor(color);
	return paintedRect;
}
int main(){
	Rectangle rect(10.5,5.5);
	rect.display();
	Rectangle paintedRect = paint(rect,"red");
	paintedRect.display();
	return 0;
}