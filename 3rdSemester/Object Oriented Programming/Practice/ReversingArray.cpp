// LIFO: This program reads 30 integers and
// prints them out in reverse order: Last In, First Out
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 2;
    const int LENGTH = 30 ;
    int i, a[LENGTH] = {2,3,2,4,2,42,4,32,42,34,32,4,32,4,23,4,2,34,32,42,3,42,34,32,54,65,45,65,65,89};
cout << "Enter " << LENGTH << " integers:\n";

  //  for (i=0; i<LENGTH; i++)
  //      cin >> a[i];

cout << "\nThe same integers in reverse order:\n";

    for (i=0; i<LENGTH; i++)
        cout << setw(6) << a[LENGTH - i - 1]
             << (i % 10 == 9 ? '\n' : ' ');

    return 0;
}
