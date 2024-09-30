
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
ifstream infile("person.txt");
string word, searchWord;
int count = 0;
cout << "Enter word to search: ";
cin >> searchWord;
transform(searchWord.begin(), searchWord.end(), searchWord.begin(), ::tolower);
while (infile >> word) {
transform(word.begin(), word.end(), word.begin(), ::tolower);
if (word == searchWord) count++;
}
cout << "The word '" << searchWord << "' appears " << count << " times." << endl;
return 0;
}