#include <iostream>

int main() {
  
/*Optional: Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
Take some time to research and brainstorm before starting to write the code!*/
 
  int year ;
  std::cout << "Enter Year: \n";
  std::cin >> year;

  if (year < 0 || year > 10000)
  { 
    std::cout << "Invalid year. \n";
    std::cout << "Enter Year: \n";
    std::cin >> year;

  } else if 
  // i dunno why this doesnt work: (year % 4 == 0 && year % 400 == 0 && year % 100 != 0) 
  (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
      std::cout << year << "  is a leap year.\n";
  }
  else {
      std::cout << year << "  is not a leap year.\n";

  }

system("pause");  
   return 0;




}