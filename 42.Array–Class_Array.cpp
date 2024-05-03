/*
  Arrays
  - Array Class
  - Test Methods: .size(), .points

  Syntax
  Template<Type, Size> Identifier;
*/

#include <array> //=> this necessary to use the syntax & the methods
#include <iostream>
using namespace std;

int main()
{
  // int points[4] = {1, 2, 3, 4}; // C-Style Array => this style has problems
  array<int, 4> points = {1, 2, 3, 4};
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  cout << "Elements Count: " << points.size() << "\n";
  points.fill(10);
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  points.fill('A');
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  points.fill(true);
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  points.fill(false);
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  return 0;
}