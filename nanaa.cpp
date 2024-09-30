#include<iostream>
using namespace std;
class car{
	public:
		int speed(int maxspeed);
};
int car::speed( int maxspeed){
	return maxspeed;
}
int main(){
	car c1;
	cout<<c1.speed(500);
	return 0;
}