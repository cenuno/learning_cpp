// Use cin and cout to display number and text input by user

// load necessary headers
#include <iostream>
#include <string>

int main()
{

   // declare features from <iostream> namespace
   using std::cout;
   using std::endl;
   using std::cin;
   using std::string;

   // declare a variable to store an integer
   int inputNumber;

   cout << "Enter an integer: ";

   // store integer from user input
   cin >> inputNumber;

   // do the same with text user input
   cout << "Enter your name: ";
   string inputName;
   cin >> inputName;

   // display contents to Terminal
   cout << inputName << " entered: " << inputNumber << endl;

   return 0;
}

