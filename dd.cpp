#include <iostream>
#include <fstream>
using namespace std;
int main() {
ifstream infile("person.txt");
ofstream outfile("encrypted.txt");
char ch;
int shift = 3;
while (infile.get(ch))
{
outfile.put(ch + shift);
}
infile.close();
outfile.close();
ifstream encryptedFile("encrypted.txt");
cout << "Decrypted content: ";
while (encryptedFile.get(ch)) {
cout.put(ch - shift);
}
encryptedFile.close();
return 0;
}
