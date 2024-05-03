/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Operators Precedence
  "Which One Has Higher Precedence"

  Refernce
  --- Operators Precedence Table

  Search
  - Bitwise Operators
  - Spaceship Operator

  Training
  - Try Operators Yourself Before Browsing References
*/

#include <iostream>
using namespace std;

int main()
{
  cout << 10 + 5 * 5 << "\n";
  // 5 * 5 = 25
  // 10 + 25 = 35
  cout << 10 - 5 * 5 << "\n";
  // 5 * 5 = 25
  // 10 - 25 = -15
  cout << 20 / 5 * 4 << "\n";
  // 20 / 5 = 4
  // 4 * 4 = 16
  cout << 10 + 20 / 5 * 4 << "\n";
  // 10 + 16 = 26
  // 20 / 5 = 4
  // 4 * 4 = 16
  cout << (10 + 5) * 5 << "\n"; // (15) * 5 = 75  => this is if u want to do it from the left to right as u would like
  // training
  cout << 10 * 5 + 80 / 20 / 4 - 2 << endl;
  // 80 / 40 = 4
  // 4 / 4 = '1'
  // 10 * 5 = '50'
  // 50 + 1 = '51'
  // 51 - 2 = 49
  cout << 10 * (5 + 80) / (20 / 4) - 2 << endl;
  // 5 + 80 = 85
  // 20 / 4 = 5
  // 10 * 85 / 5 - 2
  // 85 / 5 = 17
  // 10 * 17 = 170
  // 170 - 2 = 168
  return 0;
}