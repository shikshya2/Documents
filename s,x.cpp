#include <iostream>
#include <string>
using namespace std;
class Person {
private:
string name;
int age;
public:
Person(string n = "", int a = 0) : name(n), age(a) {}
friend ostream& operator<<(ostream& out, const Person& p);
friend istream& operator>>(istream& in, Person& p);
};
ostream& operator<<(ostream& out, const Person& p) {
out << "Name: " << p.name << ", Age: " << p.age;
return out;
}
istream& operator>>(istream& in, Person& p) {
cout << "Enter name: ";
in >> p.name;
cout << "Enter age: ";
in >> p.age;
return in;
}
int main() {
Person person;
cin >> person;
cout << "Person details: " << person << endl;
return 0;
}
