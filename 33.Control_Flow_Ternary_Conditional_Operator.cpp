/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 25;

  if (age >= 18)
  {
    cout << "Your Age Is OK\n";
  }
  else 
  {
    cout << "Your Age Is Not Ok";
  }

  cout << (age >= 18 ? "Age Is Ok" : "Age Is Not Ok\n");

  string msg = age >= 18 ? "Age Is Ok" : "Age Is Not Ok";

  cout << msg;
  return 0;
}