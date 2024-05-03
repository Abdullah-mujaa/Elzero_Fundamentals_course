/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
  // App 1 => Even / Odd Checker
/*   int num;
  cout << "Enter a number: ";
  cin >> num;
  if (num % 2 == 0)
  cout << num << " is an even number\n";
  else
  cout << num << " is an odd number\n";
   */

  // App 2 => Find Greatest Number 
  /* int a , b , c;
  cout << "Enter any three numbers: ";
  cin >> a >> b >> c;
  if (a>b && a>c) 
  cout << "The Greatest Number Is " << a << endl;
  else if (b>a && b>c)
  cout << "The Greatest Number Is " << b << endl;
  else
  cout << "The Greatest Number Is " << c << endl; */
  /* else 
  cout << "All are Equal" << endl; */

  // App 3 => User Rank Checker
  /* int points;
  cin >> points;

  if (points > 0 && points <= 500)
  {
    cout << "Not Bad\n";
  }
  else if (points > 500 && points <= 1000)
  {
    cout << "Very Good\n";
  }
  else // we didn't use 'else if' b/c the users won;t ener 0 or negative
  {
    cout << "VIP\n";
  } */

 // App 4 => Simple Calculator

  int num_one, num_two, op;

  cout << "Type Number One\n";
  cin >> num_one;
  cout << "Type Number Two\n";
  cin >> num_two;
  cout << "Choose Operation Number\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;

  if (op == 1)
  {
    cout << num_one + num_two << "\n";
  }
  else if (op == 2)
  {
    cout << num_one - num_two << "\n";
  }
  else if (op == 3)
  {
    cout << num_one / num_two << "\n";
  }
  else if (op == 4)
  {
    cout << num_one * num_two << "\n";
  }
  else
  {
    cout << "Operation Is Not Valid\n";
  }
  system("pause");
  return 0;
}