/* Numeric-stars palindrome pattern 3

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****


*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        // for each row

        // 1)*
        for (int col = 1; col <= n-row+4; col++)
        {
            cout << "*";
        }
        //2) 2*2*
        for(int col = 1; col <= row;col++){
            cout <<row<<"*";
        }
        //3) *
        for(int col = 1; col <=n-row+3; col++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}