/* Numeric Solid Half Diamond - 4

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    for (int row = 1; row <= n; row++)
    {
        // for first and last row
        if (row == 1 || row == n)
        {
            cout << "* ";
        }
        // logic 1 - for row =2 to 4
        else if (row == 2 || row == 3 || row == 4)
        {
            cout << "* ";

            // increasing num
            int counter = 1;
            while (counter != row - 1)
            {
                cout << counter << " ";
                counter++;
            }

            // decreasing num
            while (counter != 0)
            {
                cout << counter << " ";
                counter--;
            }
            cout << "* ";
        }
        else
        {
            // logic 2 for row=5 to 6
            cout << "* ";
            int counter = 1;
            while (counter != n - row)
            {
                cout << counter << " ";
                counter++;
            }
            while (counter != 0)
            {
                cout << counter << " ";
                counter--;
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}