
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
ifstream infile("person.txt");
ofstream outfile("personcopy.txt");
string name;
while (getline(infile, name)) {
outfile << name << endl;
}
cout << "File copied successfully." << endl;
return 0;
}