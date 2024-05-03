/*
  Arrays
  - Declare Empty Array
  - Add Elements To Array
  - Update Array Elements
  - Get Length Of Array With Sizeof
*/

#include <iostream>
using namespace std;

int main()
{
  int nums[4];

  nums[3] = 400; // Last Element  => we added , actually we updated the random numbers
  nums[2] = 300; // Third Element
  nums[0] = 100; // First Element
  nums[1] = 200; // Second Element

  cout << "Element 1: " << nums[0] << endl;
  cout << "Element 2: " << nums[1] << endl;
  cout << "Element 3: " << nums[2] << endl;
  cout << "Element 4: " << nums[3] << endl;

  nums[1] = 1000; // Second Element => we updated here
  cout << "Element 2: " << nums[1] << endl;

  int anums[] = {100, 200 , 300, 400, 500, 600}; // 24 / 4 = 6
  cout << "Array Elements Count Is " << sizeof(anums) / sizeof(anums[0]);
  return 0;
}