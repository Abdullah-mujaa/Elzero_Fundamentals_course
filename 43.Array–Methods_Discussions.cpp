/*
  Arrays
  - Useful Methods
  --- at
  --- front => see the array file
  --- back  => see the array file ,try to do the methods by what u learned
  --- fill
  --- size
  --- empty => is the array empty , so if it is = 1(true) if not = 0(false)
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 4> nums = {100, 200, 300, 400};
  cout << nums[0] << "\n";      // 100
  cout << nums.front() << "\n"; // 100
  cout << nums[3] << "\n";      // 400
  cout << nums.back() << "\n";  // 400
  cout << nums.at(1) << "\n";   // 200
  cout << nums.size() << "\n";  // 4 => we did this before
  cout << nums.empty() << "\n"; // 0 => False
  return 0;
}