#include <iostream>
using namespace std;
int main()
{
  int n, r, sum, temp;
  cout << "Enter a number: ";
  cin >> n;
  sum = 0;

/*temp is a temporary variable to
store the value of variable n*/
  temp = n;

/*While code block is used to
increment the value of sum with temp*/
  while (temp > 0)
  {
    r = temp % 10;
    sum = (sum * 10) + r;
    temp = temp / 10;
  }

  if (n == sum)
  {
    cout << n << " Is pallindrome" << endl;
  }
  else
  {
    cout << n << " Not Pallindrome" << endl;
  }
}
