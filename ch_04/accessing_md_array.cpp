// Accessing elements in a multi-dimensional array

#include <iostream>

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  // note: the use of the back slash enables line continuation
  int threeRowsThreeColumns [3] [3] = \
  {{-501, 206, 2019}, {989, 101, 209}, {303, 456, 695}};

  // note: a more efficient way of doing this will be using nested for loops
  //       to reduce code and make explicit what needs to be repeated
  cout << "Row 0: " << threeRowsThreeColumns[0][0] << " " \
                    << threeRowsThreeColumns[0][1] << " " \
                    << threeRowsThreeColumns[0][2] << endl;

  cout << "Row 1: " << threeRowsThreeColumns[1][0] << " " \
                    << threeRowsThreeColumns[1][1] << " " \
                    << threeRowsThreeColumns[1][2] << endl;

  cout << "Row 2: " << threeRowsThreeColumns[2][0] << " " \
                    << threeRowsThreeColumns[2][1] << " " \
                    << threeRowsThreeColumns[2][2] << endl;

  return 0;
}