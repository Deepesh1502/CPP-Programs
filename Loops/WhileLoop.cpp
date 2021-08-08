#include <iostream>
using namespace std;
int main()
{
  int i, n;
  cout << "1) To Print numbers with While Loop\n";
  cout << "Enter the Initial: ";
  cin >> i;
  cout << "Enter the final: ";
  cin >> n;
  while (i <= n)
  {
    i++;
    cout << i << "\n";
  }
}
