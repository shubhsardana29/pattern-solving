/* Numeric palindrome pattern 2

    1
   121
  12321
 1234321
123454321


*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count;
    for (int row = 1; row <= n; row++)
    {
        // for each row

        // spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        // number
        count=0;
        for(int col=1; col<=row;col++){
            count++;
            cout<<count<<" ";
        }
        for(int col=1; col<=row-1; col++){
            count--;
            cout<<count<<" ";
        }
        // after each row->newline
        cout << endl;
    }
    return 0;
}