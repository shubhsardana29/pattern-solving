/* Hollow full pyramid

    *
   * *
  * _ *
 * _ _ *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
         // spaces
            for (int col = 1; col <= n-row; col++)
            {
                cout << " ";
            }

        if (row == 1 || row == n)
        {
            // stars
            for (int col = 1; col <= row; col++)
            {
                cout << " *";
            }
        }

        else
        {
            // for remaining rows
            cout << " *";
            // spaces
            for (int col = 1; col <= row - 2; col++)
            {
                cout << "  ";
            }
            cout << " *";
        }

        cout << endl;
    }
    return 0;
}