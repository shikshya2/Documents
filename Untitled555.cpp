#include<iostream>
using namespace std;
class Date {
private:
int day;
int month;
int year;
public:
Date(int d, int m, int y) : day(d), month(m), year(y) {}
void updateDate(int d, int m, int y) {
day = d;
month = m;
year =y;
cout<<"Updateddate:"<<day<<"/"<<month<<"/"<<year<<endl;
}
void getDate(){
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
};
int main() {
Date today(24, 17, 2005);
today.getDate();
today.updateDate(6,4,2007);
return 0;
}


 
