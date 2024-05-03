/*
  Variables Naming Rules & Best Practices

  - Naming Rules
  --- Must Be Unique => we can't declare more than once
  --- Case Sensitive => they will be two different variables
  --- Cannot Start With Numbers
  --- Nums Or Letters Or Underscore => they can be used in the variables
  --- No White Space Or Special Characters
  --- Reserved Keywords "Class, Public"

  - Best Practices => it differ from the rules that it doesn't cause error
  --- Related Names, for example "x" i may know what it means but for the reader is not, so create a descriptive name
  --- Writing Style, in cpp we use camelcase which is the second word capital eg. PayPal , FedEx... The format indicates the first word starting with either case, then the following words having an initial uppercase letter. Common examples include YouTube, PowerPoint, HarperCollins, FedEx, iPhone, eBay, and LaGuardia)
*/

#include <iostream>
using namespace std;

int main()
{
  int price = 100; // Declare A New Variable
  price = 200;     // Update The Value
  int Price = 400; // this will create an error(if we wrote "price") which says it's created previously
  cout << price;
  cout << "\n===============\n";
  int n1um1111 = 10;
  cout << n1um1111;
  cout << "\n===============\n";
  int _num_bers_ = 100; // if we wrote "int num bers = 100 , this will create a problem cause a word with whitespace is like 2 things, also a problem : "num!/num@/
  cout << _num_bers_; 
  cout << "\n===============\n";
  int publics = 1000; //if it was "public" it would create an error cause it is a reserved name by cpp
  cout << publics;
  cout << "\n===============\n";
  int OSAMA = 500; // Bad Style
  cout << OSAMA;
  cout << "\n===============\n";
  int x = 1000; // not related
  cout << x;
  return 0;
}