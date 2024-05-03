/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive -> True is not possible
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math (28 line)
  --- Test > And < (31)
  --- Test Data [100, 0, -100, ""] => 0(false) -> sth empty, (any no.) -> true

  - void => Valueless
  --- Without Value
*/

#include <iostream>
using namespace std;

void without_value() // this is the fun name & doesn't require "return 0;" b/c it is not required to for eg. creating a fun that opens the website
{
  // Nothing To Return
}

int main() // this main fun returns a result which is integer(0) which is "return 0;"
{
  bool is_open = true;                 //-> for eg. if ur website is undergoing dev't u can make the browsing false, a question why don't we say if open = 1 , or any other number , the ans : see how it is uesd in > & <
  cout << is_open + 10 << endl;        // 1 + 10 = 11
  cout << true + true + false << endl; // 1 + 1 + 0 = 2
  bool test_one = 10 > 5;              // Yes => True => 1
  bool test_two = 10 > 100;            // No => False => 0
  cout << test_one << endl;            // 1
  cout << test_two << endl;            // 0
  int num = 1;
  cout << sizeof(test_one) << endl; // 1 Byte
  cout << sizeof(num) << endl;      // 4 Bytes -> b/c it's int
  bool num_one = 100;
  bool num_two = -100;
  bool num_three = 0;
  cout << num_one << endl;   // 1(true)
  cout << num_two << endl;   // 1
  cout << num_three << endl; // 0(false) -> sth empty
  return 0;
}