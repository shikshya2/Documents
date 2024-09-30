#include<iostream>
using namespace std;
class rectangle{
	private:
		int width;
		int height;
		public:
			rectangle(int w,int h){
				width=w;
				height=h;
			}
			friend int getarea(rectangle r);
};
int getarea(rectangle r){
	return r.width*r.height;
}
int main(){
	rectangle r1(4,4);
	int area=getarea(r1);
	cout<<"Area is:"<<area<<endl;
	return 0;
}