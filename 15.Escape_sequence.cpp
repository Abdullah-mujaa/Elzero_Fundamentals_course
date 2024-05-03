/*
  Escape Sequences Characters
  --- Special Non Printing Characters(it won't appear when printed like '\n')
  --- Control Printing Behaviour
  --- Start With Back Slash "\"
  --- Can Be Inserted In Any Position
  - \n => new line
  - \\ => what is nxt it is printed like a string
  - \" => similar to the above
  - \' => similar to the above
  - \t => Tab Equal 8 Spaces
  - \b => backspace
  - \a => Alert => Play Beep During Execution
  - \r => Carriage Return
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\\\n";
  cout << "Line \"4\"\n";
  cout << "Line 5\n";
  cout << "Line\t6\n";
  cout << "Line\b7 \n"; // Lin7
  cout << "Line 8\a\n";
  cout << "Osama\r Lzero\n"; // Lzero
  cout << "Line"; // This Is Line 
  system("pause");
  return 0;
}

//it is like saying to the compiler that it is just a text not a character(with meaning)
// Why the last line has made this effect in the next line? 