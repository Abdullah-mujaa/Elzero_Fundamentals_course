/*
  Variables Basic Knowledge
  - Data Container With Unique Name "Identifier"
  - Declare With Value + Change Later

  Syntax
  - [Data_Type] [Variable_Name] = [Value]
*/

#include <iostream>
// by using the f.f we no longer need to write in the source code std::cout.....
using namespace std;


int main()
{ 
  int price = 200;
//   std::cout << "Price Is: 100(price)"; it will print the "price" and not the value
  cout << "Price Is: " << price;
  cout << "\nPrice After Adding 15 is: " << price + 15;
  cout << "\nPrice After Adding 50 is: " << price + 50;
/*  int price = 200 , instead of above if u declare it here it will result in not printing the previous two lines
 cause we said that the language reads line by line */
//we didn't use int below b/c we have already declared it and now we r changing
   price = 150;
   cout << "\nThe New Price is: " << price;
   return 0;
}

