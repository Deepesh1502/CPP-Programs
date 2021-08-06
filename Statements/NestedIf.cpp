#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter your age: ";
  cin >> n;

/*The If condition will check
in which age group you fit*/
  if (n >= 13)
  {
    if (n >= 18)
    {
      cout << "You are an adult";
    }
    else
    {
      cout << "You are a teenager";
    }
  }
  else
  {
    cout << "You are a child";
  }
}
