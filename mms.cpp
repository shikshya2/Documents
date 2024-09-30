#include<iostream>
using namespace std;
class employee{
	private:
		int salary;
		public:
			void setsalary(int s){
				salary=s;
			}
			int getsalary(){
				return salary;
				
			}
};
int main(){
	employee e1;
	e1.setsalary(2000);
	cout<<e1.getsalary();
	return 0;
}