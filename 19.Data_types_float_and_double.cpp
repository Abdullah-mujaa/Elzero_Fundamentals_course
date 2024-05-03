/*
  Primitive Data Types
  - float => Floating Point Number
  --- Test Integer Value In Float Variable -> no problem
  --- We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  --- Test With Auto
  --- 7 Decimal Precision

  - double => it is Double The Float
  --- 15 Decimal Precision
*/

#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  num = 20.5;
  cout << sizeof(num) << endl;  // 4 b/c it is int
  cout << num << endl;  // 20 -> it will ignore what is after the point

	double dob = 10; // -> it unnecessary for it to be with points , u may at the end want the result be in points
  dob = 20.5;
  cout << sizeof(dob) << endl; // 8
  cout << dob << endl; // 20.5

	float fl = 10.5f + 9.5f; // -> if we dont write f it will consider it a double so the process will be slower (so specifing variable is about enhancing performance)
	cout << sizeof(fl) << endl;  // 4 ,b/c it float
	cout << fl << endl;  // 20 ,which is float

	auto mix = 10; // -> if u write '10.' it will consider it as double and if u write '10.f' it consider it as float so we can specify for it now and it will use the right byte size
  return 0;
}