/*
  Arrays
  - Two Dimensional Arrays AKA [2D Array] => it is like a table with rows and columns, row x columns

  Search For
  - Matrix Operations
  - 3D Array
*/

#include <iostream>
using namespace std;

int main()
{
  int points_a[3] = {1, 2, 3};
  int points_b[3] = {4, 5, 6};
  int points_c[3] = {7, 8, 9};

  //Good practice => you can know each row and column

  //the f.f two lines is only to simply the matter
  const int rows = 3; //=> three arrays
  const int columns = 3; //=> each array with 3 elements

  int points[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << points[1][2] << endl;  //6
  cout << points[2][0] << endl;  //7
  cout << points[2][1] << endl;  //8

  // Bad practice
/*   int points[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << points[1][2] << endl;  //6
  cout << points[2][0] << endl;  //7
  cout << points[2][1] << endl;  //8 */
  return 0;
}