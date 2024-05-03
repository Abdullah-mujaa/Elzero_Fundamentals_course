/*
  String
  - Concatenating Strings => is about putting strings together
  --- Normal Way
  --- strcat => Include string.h
  --- With +
  --- append , put what inside the bracket nxt it
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char fname[] = "Osama ";
  char lname[] = "Elzero";

  cout << fname << lname << "\n";
  cout << strcat(fname, lname) << "\n" ;
  
  string first_name = "Osama ";
  string last_name = "Elzero ";

  cout << first_name + last_name << "\n";
  cout << first_name.append(last_name);

  return 0;
}