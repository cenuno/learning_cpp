// Using the return value of a function

#include <iostream>

// function declaration and definition
int DemoConsoleOutput()
{
   // declare features to be used from <iostream> namespace
   using std::cout;
   using std::endl;

   cout << "This is a simple string literal" << endl;
   cout << "Writing number five: " << 5 << endl;
   cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
   cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
   cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << endl;

   return 0;
}

int main()
{
   // function call with return used to exit
   return DemoConsoleOutput();
}

