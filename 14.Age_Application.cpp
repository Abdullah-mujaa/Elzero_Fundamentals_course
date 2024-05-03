/*
  Calculate Your Age Application
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "====================================\n";
  cout << "===Calculate Your Age Application===\n";
  cout << "====================================\n";

  int age; // i tried to put the nxt two line below the variables but it didn't cause cpp reads line by line
           // so it can't create the remaining variable without having the age value
  //* the next line is my addition
  cout << "Enter your age: ";
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;
  int age_in_seconds = age_in_minutes * 60;

  cout << "Age in days is: " << age_in_days << " Days\n";
  cout << "Age in minutes is: " << age_in_minutes << " Minutes\n";
  // the next two is my additions
  cout << "Age in hours is: " << age_in_hours << " Hours\n";
  cout << "Age in seconds is: " << age_in_seconds << " Seconds\n";
  system("pause");
  return 0;
}