/*
 Numeric hollow Half pyramid

1
1 2
1 _ 3
1 _ _ 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col < n; col++)
        {
            if (col == 1)
            {

                cout << col << " ";
            }
        }
        if(row == n){
            for (int col = 2; col <= n; col++)
        {
            cout << col<<" ";
        }
        }
        // spaces
        for (int col = 2; col <= row - 1; col++)
        {
            cout << "  ";
        }
        while(row!=1 && row!=n){
            cout << row<<" ";
            break;
        }
        

        cout << endl;
    }
    return 0;
}
