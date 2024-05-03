/*
  Data Types
  - What Is Data ?
  - Data Examples In Real Life -> student no. in a class
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true, false -> either of two, yes/no, on/off, 0/1
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size -> each data type has its own size
  --- Operation -> we make operation b/n them

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  string name = "Osama";
  bool status = true;

	int num_one = 100;
	int num_two = 20;

  cout << sizeof(num) << "\n";  //4
  cout << sizeof(name) << "\n"; // 32
  cout << sizeof(status) << "\n"; //1

	cout << num_one / num_two <<"\n"; // 100 / 20 = 5
	//cout << num_one / name; // error, in here tha operands are num_one and name while the operator is "/"
	system("pause");
  return 0;
}