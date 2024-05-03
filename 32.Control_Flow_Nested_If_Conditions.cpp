/*
  Control Flow
  - Nested If Conditions => if muteda5la
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 25;
  int points = 400;
  if (age >= 18) //by this we filter(flterna) ppl below 18
  {
    cout << "Welcome Your Age Is Ok\n";
    if (points >= 1000) // and now we filter from those with age >= 18 those whose points are < 1000
    {
      cout << "You Are VVIP";
    }
    else if (points >= 500)
    {
      cout << "You Are VIP";
    }
    else 
    {
      cout << "You Are In The Normal Seat";
    }
  }
  return 0;
}