// One acre of land is equivalent to 43,560 square feet. 
// Write a program that prompts the user to enter the total square footage 
// in a tract of land, calculates, and prints the result of the conversion 
// from square feet to acres. Create a constant named ACRE_FACTOR to express 
// the conversion factor. Format the output to limit the number of digits after 
// the decimal point to two digits.
// Place your solution code here for Lab2

#include <iostream>

using namespace std;

int main(){
   float sqFeet; // holds the number of square feet entered by the user
   float acres; // holds the conversion result of square feet to acres
   float const ACRE_FACTOR = 43560;
   cout << "Enter the square feet of the area to convert to acres: " << endl;
   cin >> sqFeet;
   cout.precision(2);
   cout.setf(ios::fixed);
   acres = sqFeet/ACRE_FACTOR;
   cout << sqFeet << " square feet is equal to " << acres << " acres.";
   return 0;
}
