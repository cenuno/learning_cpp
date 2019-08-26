// Demonstrating the scope of the variables

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply two numbers, store the result in a variable
   int multiplicationResult = firstNumber * secondNumber;

   // Display result
   cout << firstNumber << " x " << secondNumber;
   cout << " = " << multiplicationResult << endl;
}

int main ()
{
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that does all the work
   MultiplyNumbers();

   return 0;
}

