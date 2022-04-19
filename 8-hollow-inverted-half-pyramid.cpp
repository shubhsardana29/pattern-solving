/* hollow inverted half pyramid 

* * * * * *
* _ _ _ *
* _ _ *
* _ *
* *
*

*/

#include<iostream>
using namespace std;

int main(){
    int n=6;
    for(int row=1;row<=n;row++){
        // for first and last row
        if (row==1||row==n)
        {
            //stars
            for(int col=1;col<=n-row+1;col++){
            cout<<" *";
         }
        }
        else{
            // for remaining rows
            cout<<" *";
            //spaces
            for(int col=1;col<=n-row-1;col++){
                cout<<"  ";
            }
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}