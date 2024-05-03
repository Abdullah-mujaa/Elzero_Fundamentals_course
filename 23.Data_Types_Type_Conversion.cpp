/*
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting -> sometimes called
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type -> for eg. long long => to short
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "=====================\n";
  int a;
  double b = 20.5;
  a = b;                     // Compiler Will Convert(20.5 to int{20}) Double Value Then Assign it to 'a'
  cout << a << "\n";         // 20
  cout << sizeof(a) << "\n"; // 4 Bytes
  cout << "=====================\n";

  cout << "=====================\n";
  char c = 'C';
  int d = 20;
  cout << int(c) << "\n"; // 67
  cout << c + d << "\n";  // 67 + 20 = 87 , we converted the char to int
  cout << "=====================\n";

  cout << "=====================\n";
  int e = 20;
  double f = 20.5;
  cout << e + f << "\n";         // 20.5 + 20 = 40.5 ->until know the compiler is aotomatically doing the conversion, inhere he converted the int to double inorder to add them
  cout << sizeof(e + f) << "\n"; // 8 Bytes
  cout << "=====================\n";

  cout << "=====================\n";
  int g = 20;
  double h = 20.5;
  cout << g + (int)h << "\n";         // 20 + 20 = 40 // two ways to cast explicitly
  cout << g + int(h) << "\n";         // 20 + 20 = 40  // fun like method
  cout << sizeof(g + (int)h) << "\n"; // 4 Bytes
  cout << sizeof(g + int(h)) << "\n"; // 4 Bytes
  cout << "=====================\n";
  return 0;
}