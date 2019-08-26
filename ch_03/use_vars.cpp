// Using variables to store numbers and the result of their multiplication

#include <iostream>

int main()
{
   using std::cout;
   using std::endl;
   using std::cin;

   cout << "This program will help you mutliply two numbers" << endl;

   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply two numbers, store result in a variable
   int multiplicationResult = firstNumber * secondNumber;

   // Display result
   cout << firstNumber << " x " << secondNumber;
   cout << " = " << multiplicationResult << endl;

   return 0;
}

