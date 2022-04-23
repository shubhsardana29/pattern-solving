/* Numeric Solid Half Diamond - 1

3
4 4
5 5 5
6 6 6 6
5 5 5 
4 4 
3

*/

#include<iostream>
using namespace std;

int main(){
    int n=4,a;
    for(int row=1; row<=n;row++){
        for(int col=1;col<=row;col++){
            a=row+2;
            cout<<a<<"  ";
            }
            // after every row, newline
            cout<<endl;
    }
    a=n+1;
    for (int row = 1; row<n; row++)
    {
        for (int col= 1; col<=(n-row); col++)
        {
            cout<<a<<"  ";
        }
        a=a-1;
        cout<<endl;
    }
    return 0;
}