/*
  Primitive Data Types -> basic variables
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int => the last line
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants -> the above two numbers
  --- Check Limits Header File limits.h -> open this file to see the constant min and max ( define)
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator(=) -> b/c it assigns the value of the variable to the variable.
*/

#include <iostream>
#include <limits.h> // open this file to see the constant min and max ( define)
using namespace std;

int main()
{
  int num_one = 100;
  int num_two = -500;
  int num_three = 0;
  int num_four = true; // true = 1 , false = 0
  // int num_five = "Elzero"; // Problem
  cout << num_one << endl; // similar to \n (end line)
  cout << num_two << endl;
  cout << num_three << endl;
  cout << num_four << endl;

  cout << INT_MIN << endl;
  cout << INT_MAX << endl;

  cout << sizeof(int) << endl; //...4
  cout << sizeof(char) << endl; //...1
  cout << sizeof(float) << endl;  //...4
  cout << sizeof(double) << endl;  //...8
  cout << sizeof(bool) << endl;  //...1

  int last_num = 10.5;
  cout << last_num << endl; // b/c u said it is int it cut what after the point
  return 0;
}