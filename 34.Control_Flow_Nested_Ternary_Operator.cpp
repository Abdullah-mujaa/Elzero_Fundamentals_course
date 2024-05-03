/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition => if it's single line

  Syntax
  (Condition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int points = 200;

  /* if (age >= 18) {
    cout << "OK\n";
  }
  else {
    if (points >= 500) {
      cout << "Ok Because Of Points\n";
    }
    else 
    {
      cout << "No Age Or Points\n";
    }
  } */
  cout << (age >= 18 ? "Ok\n" : (points >= 500 ? "Ok Because Of Points\n" : "No Age Or Points\n"));

  if (age >= 18)
  cout << "Ok\n";
  else
  cout << "Not Ok\n";  // this to show that if it is one line then cruly brace is unnecessary
  return 0;
}