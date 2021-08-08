#include <iostream>
using namespace std;
int main()
{
  int i, n;
  cout << "To Print numbers with Do While Loop\n";
  cout << "Enter the Initial: ";
  cin >> i;
  cout << "Enter the final: ";
  cin >> n;

/*The Do code block will run first*/
  do
  {
    cout << i << "\n";
    i++;
  }
/*The While condition will be check
After running once the Do code block*/
  while (i <= n);
}
