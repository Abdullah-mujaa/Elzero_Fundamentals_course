/*
  Constant Variable
  - Read Only Value
  - Can't Declare Without Value
*/

#include <iostream>
using namespace std;
#define DAYS 9 // another way to create a constant variable by preprocessor directive called "define" but this way has many weaknesses

int main()
{
  const int day = 8; // so in the app the users can't change this one but in one of days if work hours became 9 then we will edit it manually here
  // int salary = 15000; // this is literally variable and not constant (cause u get promotions) but work hours for eg. are constant
  const int num = 100;
  // num = 200;// this doesn't work cause "num" is read-only and can't be edited
  cout << num;
  // const int x; // this is wrong cause obivously u need to declare the constant variable in the same line(intializer)
  cout << "\n" << DAYS;
  return 0;
}

// practical eg. calculating the no. of hours worked by a person => day * 365(actual days he worked) and then salary