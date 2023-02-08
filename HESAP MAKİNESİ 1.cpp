#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
   double num1, num2;
   char operation;

   cout << "ilk numarayý giriniz: ";
   cin >> num1;

   cout << "ikinci sayýyý giriniz: ";
   cin >> num2;

   cout << "yapmak istediniz iþlem nedir? (+, -, *, /): ";
   cin >> operation;

   if (operation == '+') {
      cout << num1 + num2;
   } else if (operation == '-') {
      cout << num1 - num2;
   } else if (operation == '*') {
      cout << num1 * num2;
   } else if (operation == '/') {
      if (num2 == 0) {
         cout << "Cannot divide by zero";
      } else {
         cout << num1 / num2;
      }
   } else {
      cout << "Invalid operator";
   }

   return 0;
}

