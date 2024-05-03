/*
  Control Flow
  - If ... else if ... else => it is about if the first condition is met we print and it is done and if the 1st is not met we go to the nxt and if all are not met we print the 'else'

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int points = 400;
  int rank = 4;

  if (age >= 18 ) {
    cout << "Welcome Your Age Is Ok\n";
  }
  else if (points > 500) {
    cout << "Welcome Your Points Is Ok";
  }
  else if (rank > 5) {
    cout << "Welcome Your Rank Is Ok";
  }
  else {
    cout << "I am Sorry";
  }

  return 0;
}