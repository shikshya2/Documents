#include<iostream>
using namespace std;
class circle{
	private:
		int radius;
		const double PI=3.14;
		public:
			void set_radius(int r){
				radius=r;
			}
			double get_circumference(){
			double	circumference=2*PI*radius;
			return circumference;
			}
			double get_area(){
				double area=PI*radius*radius;
				return area;
			}
};
int main(){
	circle c1,c2;
	c1.set_radius(111);
	c2.set_radius(222);
	cout<<"Area="<<c1.get_area()<<endl;
	cout<<"Circumference="<<c2.get_circumference()<<endl;
	return 0;
}