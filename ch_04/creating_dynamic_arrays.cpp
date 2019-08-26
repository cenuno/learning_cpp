// Creating a dynamic array of integers and inserting values dynamically

#include <iostream>
#include <vector>

int main()
{
  using std::cout;
  using std::endl;
  using std::cin;
  using std::vector;

  vector<int> dynArray (3); // dynamic array of int

  dynArray[0] = 365;
  dynArray[1] = 254;
  dynArray[2] = 143;

  cout << "Number of integers in array: " << dynArray.size() << endl;

  cout << "Enter another element to insert: " << endl;
  int newValue = 0;
  cin >> newValue;
  dynArray.push_back(newValue);

  cout << "Number of integers in array: " << dynArray.size() << endl;
  cout << "Last element in array: ";
  cout << dynArray[dynArray.size() - 1] << endl;

  return 0;
}
