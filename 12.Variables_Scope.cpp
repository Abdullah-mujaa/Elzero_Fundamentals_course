/*
  Variables Scope
  - Global Variable
  - Local Variable
*/

#include <iostream>
using namespace std;

int a = 100; // Global Variable

int second()
{
  int b = 200; // Local Variable
  cout << a << " Coming From Second Function\n";
  cout << b << " Coming From Second Function\n";
  return 0;
}

int main()
{
//   second();  if we uncomment it the result of the "second" fun will be displayed first ,but anyway what is displayed on the output is the main fun
  cout << a << " Coming From Main Function\n";
  // cout << b << " Coming From Main Function\n"; // Undefined
  second();
  return 0;
}