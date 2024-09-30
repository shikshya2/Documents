#include &lt;iostream&gt;
using namespace std;
class BankAccount {
private:
int accountNumber;
float balance;
public:
BankAccount(int accNum, float initialBalance)
: accountNumber(accNum), balance(initialBalance) {}
void deposit(float amount) {
cout&lt;&lt;amount&lt;&lt;&quot; was deposited.&quot;&lt;&lt;endl;
checkBal();
balance += amount;
}
void withdraw(float amount) {
cout&lt;&lt;amount&lt;&lt;&quot; was withdrawn.&quot;&lt;&lt;endl;
checkBal();
balance -= amount;
}
void checkBal(){
cout&lt;&lt;&quot;Your current balance is &quot;&lt;&lt;balance&lt;&lt;endl;
}
};
int main() {
BankAccount myAccount(123456789, 2871);

myAccount.deposit(500.00);
myAccount.withdraw(200.00);
return 0;
}