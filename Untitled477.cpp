#include<iostream>
using namespace std;
class Date {
private:
int day;
int month;
int year;
public:
Date(int d, int m, int y) : day(d), month(m), year(y) {}
void get(int d, int m, int y) {
day = d;
month = m;
year =y;
cout<<"date:"<<day<<""<<"month:"<<month<<""<<"year:"<<year<<endl;
}
void set(){
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
};
int main() {
Date today(24, 17, 2005);
today.get();
today.set(6,4,2007);
return 0;
}