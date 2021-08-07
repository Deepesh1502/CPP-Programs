#include <iostream>
using namespace std;
int main()
{
  int a, i, n, o;
  cout << "Select an option\n";
  cout << "1) To get tables of a number\n";
  cout << "2) To print numbers\n";
  cout << "Enter the option number: ";
  cin >> n;

/*The switch expression will
determine the case 1 or 2 to be perform*/
  switch (o)

  {
    case 1:
      cout << "Enter value for table of: ";
      cin >> i;
      a = 1;
      for (n = i; n <= (i * 10); n += i)
      {
        cout << i << " * " << a << " = " << n;
	a++;
      }

      break;
/*Break will exit the code and
prevent to run case 2*/

    case 2:
      cout << "Enter Initial value: ";
      cin >> i;
      cout << "Enter Final value: ";
      cin >> n;
      for (i; i <= n; i++)
      {
        cout << i;
      }
      break;
  }
}
