#include <iostream>
using namespace std;
int main() {
  int birth_year, age;
  cout << "Enter your birth year: ";
  cin >> birth_year;
  age = 2021-birth_year;
  //The value of switch case are default 0 and 1 as a boolean value
  switch (age >=18) {
    case 0:
      cout << "You are below 18";
      break;
    case 1:
      cout << "You are above 18";
      break;
  }
}
