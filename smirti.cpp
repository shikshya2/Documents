#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
ifstream infile("person.txt");
if (!infile) {
cout << "Error opening file!" << endl;
return 1;
}
string line;
cout << "Contents of person.txt:" << endl;
while (getline(infile, line)) {
cout << line << endl;
}
infile.close();
return 0;
}

