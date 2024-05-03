/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits, so we have seen the file(limits.h) and tried below the 3 types , so it is a thing to modify the length of data(increasing/dec.ing), the data in the egs was int

  ----- Signed [int, char] -> what is 'char' doing here? ans: we said it is described by ASCII (which is numbers)
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type; -> identifies is the name we give
  --- typedef unsigned long UL; -> the identifier here is "unsigned long"

*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int age = 300;
  cout << sizeof(age) << "\n"; // 4 Bytes

  short int new_age = 300;         // we made it short b/c SHRT_MAX is '32767' as in the limits.h file and the age can never even reach it (the int_max is 2147483647), so we saved space(2Bytes)
  cout << sizeof(new_age) << "\n"; // 2 Bytes

  short last_age = 300;             // u dont need to write int , he will know it
  cout << sizeof(last_age) << "\n"; // 2 Bytes

  cout << sizeof(short int) << "\n";     // 2 Bytes
  cout << sizeof(short) << "\n";         // 2 Bytes
  cout << sizeof(long int) << "\n";      // 4 Bytes  -> as there is short there is also long & long long , don't focus on them now
  cout << sizeof(long) << "\n";          // 4 Bytes
  cout << sizeof(long long int) << "\n"; // 8 Bytes -> we doubled each of the 3 to show it is unnecessary to write the int
  cout << sizeof(long long) << "\n";     // 8 Bytes

  int num_one = 100;
  cout << num_one << "\n";
  
  signed int num_two = 0;
  cout << num_two << "\n";
  
  unsigned int num_three = 100;
  cout << num_three << "\n";

  // unsigned int num_four = -10; // Problem
  // cout << num_four << "\n";

  // long long int my_number = 100010001000;
  // cout << my_number << "\n";

  //using bignum = long long int; //we can leave the int and just write long long
  typedef long long int bignum;

  bignum my_number = 100010001000;
  cout << my_number << "\n";

  system("pause");
  return 0;
}