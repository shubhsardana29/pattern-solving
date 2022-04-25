/* Butterfly-Solid Halves Diamond

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
    // 1 upper first
        // stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
    // upper 2nd
        // spaces for 2nd
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // after each row->newline
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
    // lower first
        // stars
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        // spaces for fist lower half
        for (int col = 1; col <= row - 1; col++)
        {
            cout << "  ";
        }

    // lower 2nd
        // spaces
        for (int col = 1; col <= row - 1; col++)
        {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}