/*
  Control Flow -> like in this example we controlled 'the flow of the data' the 'beware'
  - If Condition Introduction

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
  cout << "Welcome\n";

  if (age < 18) 
  {
    cout << "Beware\n";
  }

  cout << "See You\n";

  cout << "============Guess Game=========="<<endl;
  int guess;
  int answer = 2;
  cout << "Enter your guess from 1 to 5: ";
  cin >> guess;
  if ( guess == answer)
  {
    cout << "\nCongruatulaion!! Your guess is right\n";
  }

  if ( guess != answer) 
  {
    cout << "\nTry again\n";
  }
  system("pause");
  return 0;
}