/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
*/

#include <iostream>
using namespace std;

int main()
{
  // int likes = 0;
  // cout << likes++ << "\n"; // 0  -> inhere it is printed 0 b/c it is post increment b/c it is after the var so the compiler will first print the 'likes" then add the increment so in the nxt line it is printed with the increment
  // cout << likes << "\n";   // 1
  int likes = 0;
  // cout << ++likes << "\n";  //1
  // cout << likes << "\n";  //1
  cout << likes-- << "\n"; // 0
  cout << likes << "\n";   // -1

  int views = 0;
  cout << --views << "\n"; // -1
  cout << views << "\n";   // -1
  // system("stop");
  return 0;
}