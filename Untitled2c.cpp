#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
float sum(float a, float b) {
    return a + b;
}
string sum(const string& a, const string& b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 5.5, float2 = 10.5;
    string str1 = "Hello, ", str2 = "World!";
    cout << "Sum of integers: " << sum(int1, int2) << endl;
    cout << "Sum of floats: " << sum(float1, float2) << endl;
    cout << "Concatenation of strings: " << sum(str1, str2) << endl; 

    return 0;
}
