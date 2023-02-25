/*Write a program that takes two integers as input from the user.
Using conditional statements, determine which integer is greater and display a message to the user indicating which integer is greater.*/


#include <iostream>
using namespace std;

int main() {
   int num1, num2;

   cout << "Enter the first integer: ";
   cin >> num1;

   cout << "Enter the second integer: ";
   cin >> num2;

   if (num1 > num2) {
      cout << num1 << " is greater than " << num2 << endl;
   } else if (num2 > num1) {
      cout << num2 << " is greater than " << num1 << endl;
   } else {
      cout << num1 << " and " << num2 << " are equal" << endl;
   }

   return 0;
}
