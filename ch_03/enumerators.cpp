// Using enumerated values to indicate cardinal wind directions

#include <iostream>

enum CardinalDirections
{
   North = 25,
   South,
   East,
   West
};

int main()
{
   using std::cout;
   using std::endl;

   cout << "Displaying directions and their symbolic values" << endl;
   cout << "North: " << North << endl;
   cout << "South: " << South << endl;
   cout << "East: " << East << endl;
   cout << "West: " << West << endl;

   CardinalDirections windDirection = South;
   cout << "Variable windDirection = " << windDirection << endl;

   return 0;
}

