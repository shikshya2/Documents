#include <iostream>
using namespace std;
class BankAccount{
private:
string name;
int balance;
public:
BankAccount(string n, int a): name(n), balance(a){}
void displayInfo(){
cout <<name<<balance<<endl;
}
friend void transferfunds(BankAccount& b1, BankAccount& b2, int amount);
};
void transferfunds( BankAccount& b1, BankAccount& b2, int amount){
b1. balance-=amount;
b2. balance+=amount;
}
int main(){
BankAccount a1 ("Shikshya " ,30000);
BankAccount a2("Kriti ",1000);
a1. displayInfo();
transferfunds (a1,a2, 100);
a1. displayInfo();
return 0;
}