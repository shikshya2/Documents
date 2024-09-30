
#include<iostream>
using namespace std;
class BankAccount {
private:
int accountNumber;
float balance;
public:
BankAccount(int accNum, float initialBalance): accountNumber(accNum), balance(initialBalance) {}
void deposit(float amount) {
cout<<amount<<"was deposited"<<endl;
checkBal();
balance += amount;
}
void withdraw(float amount) {
cout<<amount<<"was withdrawn"<<endl;
balance -= amount;
}
void checkBal(){
cout<<"your current balance is"<<balance<<endl;
}
};
int main() {
BankAccount myAccount(987654321, 7652);

myAccount.deposit(900.00);
myAccount.withdraw(200.00);
return 0;
}
