#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b){

    return a + b;
}
int main() {
    int x = 5, y = 10, z = 15;
    double m = 5.5, n = 10.5;
    cout << "Sum of two integers (5 + 10): " << add(x, y) << endl; // Calls add(int, int)
    cout << "Sum of three integers (5 + 10 + 15): " << add(x, y, z) << endl; // Calls add(int, int, int)
    cout << "Sum of two doubles (5.5 + 10.5): " << add(m, n) << endl; // Calls add(double, double)
	return 0;
}
