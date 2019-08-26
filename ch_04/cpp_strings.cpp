// Using std::string to initialize, store user input, copy, concat, &
// determine the length of a string

#include <iostream>
// use std::string to manipulate string data
#include <string>

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  using std::string;
  using std::getline;

  string greetString ("Hello std::string!");
  cout << greetString << endl;

  cout << "Enter a line of text: " << endl;
  string firstLine;
  getline(cin, firstLine);

  cout << "Enter another: " << endl;
  string secondLine;
  getline(cin, secondLine);

  cout << "Result of concatenation: " << endl;
  string concatString = firstLine + secondLine;
  cout << concatString << endl;

  cout << "Copy of concatenated string: " << endl;
  string aCopy;
  aCopy = concatString;
  cout << aCopy << endl;

  cout << "Length of concat string: " << concatString.length() << endl;

  return 0;
}
