/*
  Arrays
  - Access Array Elements
  - Check Element Location
*/

#include <iostream>
using namespace std;

int main()
{
  int nums[]{100, 200, 300};
  cout << "First Element: " << nums[0] << endl;
  cout << "Last Element: " << nums[2] << endl; // Number of Elements - 1

  cout << "Location: " << &nums[0] << endl;
  cout << "Location: " << &nums[1] << endl;
  cout << "Location: " << &nums[2] << endl;
  // system("pause");

  return 0;
}