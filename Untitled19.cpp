#include <iostream>
using namespace std;
class Person{
private:
string name;
int age;
public:
Person(string n, int a):name(n),age(a){};
void info(){
cout<<"Name:"<<name<<endl;
cout<<"Age:" <<age<<endl;
}
};
int main(){
Person p1("Shikshya Adhikari",20);
p1.info();
return 0;
}