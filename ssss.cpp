#include <iostream>
#include <fstream>
using namespace std;
int main() {
ofstream outfile("person.txt");
if (!outfile) {
cout << "Error opening file!" << endl;
return 1;
}
cout << "Enter 5 names:" << endl;
for (int i = 0; i < 5; ++i) {
string name;
cout << "Name " << (i + 1) << ": ";
cin >> name;
outfile << name << endl;
}
outfile.close();
cout << "Names saved to person.txt." << endl;
return 0;
}
