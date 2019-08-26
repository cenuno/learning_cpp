// Assigning values to elements in an array
// Note: at the moment, this program does not check whether the index entered
//       by the user is within the bounds of the array. We'll revisit this in
//       Chapter 6: Controlling Program Flow

#include <iostream>
constexpr int Square(int number) { return number * number; }

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  const int ARRAY_LENGTH = 5;

  // Array of 5 integers, initialized using a const
  int myNumbers [ARRAY_LENGTH] = {5, 10, 0, -101, 20};

  // Using a constexpr for array of 25 integers
  int moreNumbers [Square(ARRAY_LENGTH)];

  cout << "Enter index of the element to be changed: ";
  int elementIndex = 0;
  cin >> elementIndex;

  cout << "Enter new value: ";
  int newValue = 0;
  cin >> newValue;

  myNumbers[elementIndex] = newValue;
  moreNumbers[elementIndex] = newValue;

  cout << "Element " << elementIndex << " in array myNumbers is: ";
  cout << myNumbers[elementIndex] << endl;

  cout << "Element " << elementIndex << " in array moreNumbers is: ";
  cout << moreNumbers[elementIndex] << endl;

  return 0;

}