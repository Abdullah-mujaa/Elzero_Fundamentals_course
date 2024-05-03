/*
  Primitive Data Types
  - char => Character
  --- Added Inside Single Quotes => Test With Auto
  --- ASCII Value -> for each charater it has its own number
  --- ASCII => American Standard Code for Information Interchange.
  --- A Way of Representing Characters As Numbers

  --- Search For Type Casting
  --- Create App To Convert ASCII To Character
  --- Create App To Convert Character To ASCII
*/

#include <iostream>
using namespace std;

int main()
{
  char a = 'A';
  cout << sizeof(a) << "\n";  //1

  auto b = 'B';
  cout << sizeof(b) << "\n";  //1

  auto c = "C";
  cout << sizeof(c) << "\n";  //8 -> so the single code is necessary for character
  //  casting
  char d = 'Z';
  cout << int(d) << "\n"; // 90

  cout << int('%') << "\n"; // 37
  cout << int('(') << "\n"; // 40
  cout << int(')') << "\n"; // 41

  // cout << int("z") << "\n"; // error
  
  cout << char(81) << "\n"; // Q

  cout << "\n====ASCII to Character====\n";
  cout << "Enter the ASCII: ";
  int ASCII;
  cin >> ASCII;
  // int Character = char(ASCII); //-> i tried to put the result in a variable and it didn't work
  cout<< "\nThe Character is:" << char(ASCII) << endl;

  cout << "\n====Character to ASCII====\n";
  cout << "Enter the Character: ";
  char Character;
  cin >> Character;
  cout<< "\nThe ASCII is: " << int(Character) << endl;
  system("pause");
  return 0;
}

// https://elzero.org/ascii-binary-character-table/

