#include <iostream>
using namespace std;
int main()
{
  int a, i, n, o;
  cout << "Select an option\n";
  cout << "1) To Print numbers\n";
  cout << "2) To print the tables\n";
  cout << "Enter the option number: ";
  cin >> o;

/*The switch expression will
determine the case 1 or 2 to be perform*/
  switch (o)

  {
  case 1:
    cout << "Enter the Initial: ";
    cin >> i;
    cout << "Enter the final: ";
    cin >> n;
    while (i <= n)
    {
      i++;
      cout << i;
    }

    break;
/*Break will exit the code and
prevent to run case 2*/

  case 2:
    cout << "Enter the value for table of: ";
    cin >> i;
    a = 1;
    while (n = i)
    {
      n <= (i * 10);
      n = n + i;
      a++;
      cout << i << " * " << a << " = " << n;
    }
    break;
  }
}
