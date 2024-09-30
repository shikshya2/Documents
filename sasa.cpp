
#include <iostream>
#include <fstream>
using namespace std;
int main() {
ofstream outfile("person.txt", ios::app);
if (!outfile) {
cout << "Error opening file!" << endl;
return 1;
}
cout << "Enter 3 new names to add to the file:" << endl;
for (int i = 0; i < 3; ++i) {
string name;
cout << "Name " << (i + 1) << ": ";
cin >> name;
outfile << name << endl;
}
outfile.close();
cout << "New names have been added to person.txt." << endl;
return 0;
}