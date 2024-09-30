#include <iostream>
#include <string>
using namespace std;
void displayDietPlan(int day) {
 if (day >= 1 && day <= 2) {
cout << "Iron-rich foods: spinach, beans, red meat\n";
 } else if (day >= 3 && day <= 4) {
cout << "Protein-rich foods: eggs, fish, chicken\n";
 } else if (day >= 5 && day <= 6) {
cout << "Antioxidant-rich foods: berries, dark chocolate\n";
 } else if (day >= 7 && day <= 8) {
cout << "- Magnesium-rich foods: bananas, leafy greens\n";
 } else if (day >= 9 && day <= 10) {
cout << "Healthy fats: avocado, nuts, seeds\n";
 } else {
cout <<"Invalid day entered.Please enter a day between 1 and 10.\n";
 }
}
int main() {
 int day;
 string name;
cout << "Welcome to Shikshya Comforting Zone <3 \n";
cout<< "I am here to help you during your menstruation cycle.\n";
cout << "Please enter your name: ";
 getline(cin, name);
cout << "Hi "<< name << "! Let's find the best foods to soothe you today.\n";
 cout << "Please enter the day of your cycle (1-10): ";
 cin >> day;
displayDietPlan(day);
cout << "Remember to listen to your body and take it easy, " << name <<
".\n";
cout << "Wishing you comfort and well-being. Take care!\n";
return 0;
}