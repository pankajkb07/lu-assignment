/*Write a program that takes an integer input from the user and prints out all the even numbers from 0 up to the input number (inclusive) using a for loop*/

#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Enter an integer: ";
   cin >> num;

   cout << "Even numbers from 0 to " << num << " are: ";
   for (int i = 0; i <= num; i += 2)
   {
      cout << i << " ";
   }

   return 0;
}
