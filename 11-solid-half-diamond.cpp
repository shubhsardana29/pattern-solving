/* Solid Half Diamond 

*
* *
* * *
* * * *
* * * * *
* * * *
* * * 
* *
*

*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int row=1; row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<" * ";
            }
            // after every row, newline
            cout<<endl;
    }
    for (int row = 2; row<=n; row++)
    {
        for (int col= 1; col<=(n-row)+1; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}