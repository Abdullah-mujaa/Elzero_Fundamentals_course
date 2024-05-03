/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory -> inhere where the datas are  stored
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage=> Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character-. example a = 10000010
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656] ->we can only have 7 after point
  --- double => 8 Bytes [18.5656565656] -. we can have 15 (double the float)
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float => i mentioned the d/ce in each

  - The Story Behind Creating A Variable
  --- Declare A Variable -> for eg. int num; 
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type-> based on the above we saved the var in a location in the memory with 2/4 byte reserved
  --- Restrict Type Of Data To The Type We Choosed -> so if u do num = "osama" -. it is error cause it is not the same size and we specied the data type when we declared the var

  - Declare Variable Without Type -> auto num = 10;
  - See Memory Address & -> int nums = 100; cout << &nums;

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/

#include <iomanip> // we wil  see later
#include <iostream>
using namespace std;

int main()
{
  cout << setprecision(13); // without this there was only displayed 4 fractional component
  float fl = 10.1234567891;
  cout << fl << "\n";
  double dob = 10.1234567891;
  cout << dob << "\n";
	//! the best practce is to use double but there are some cases to use float
  auto num = 10; // tell to the compiler to deduce the data type from the value of the var(initializer required)
  cout << num << "\n";
  int nums = 100;
  cout << &nums;
	cout << "\n=========\n==Application==\n=========\n";
	int kb;
	cout << "Enter a number of kilobytes: ";
	cin >> kb; //! i correct this line b/c i made it down first with the couts but it should be here for the nxt 2 lines to work
	int byte = kb * 1024;
	int bit = byte * 8;
	cout << "The Number Of Kilobytes That User Input is: "<< kb << " Kilobytes\n";
	cout << "The " << kb <<" Kilobytes That User Input equals to " << byte << " Byte\n";
	cout << "The " << kb <<" Kilobytes That User Input equals to " << bit << " Bit\n";
	system ("pause");
  return 0;
}